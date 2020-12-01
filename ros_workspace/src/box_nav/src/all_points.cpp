#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <math.h>

#include "rclcpp/rclcpp.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/transform_broadcaster.h"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "geometry_msgs/msg/point32.hpp"
#include "sensor_msgs/msg/point_cloud.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "sensor_msgs/point_cloud_conversion.hpp"
#include <nav_msgs/msg/odometry.hpp>
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class AllPointsPublisher : public rclcpp:Node {
    public:
        AllPointsPublisher(): Node("all_points") {
            pointCloudSub_ = this->create_subscription<sensor_msgs::msg::PointCloud2>("/lidar/points",
            rclcpp::QoS(10), std::bind(&OdometryFromLidar::topic_callback, this, std::placeholders::_1));
            allPoints = sensor_msgs::msg::PointCloud();
        }
    private:
    void topic_callback(std::shared_ptr<const sensor_msgs::msg::PointCloud2> msg) {
        sensor_msgs::msg::PointCloud p1 = sensor_msgs::msg::PointCloud();
        sensor_msgs::convertPointCloud2ToPointCloud(*msg,p1);

    }

    int closest_point(geometry_msgs::msg::Point32 point, std::vector<geometry_msgs::msg::Point32> xsort2) {
        int minIndex = 0;
        int maxIndex = xsort2.size()-1;
        int index = 0;
        double residual = 10000000.0; //big number
        int returnIndex = 0;
        while(minIndex != maxIndex) {
            index = (maxIndex+minIndex)/2;
            if(point.x == xsort2[index].x) {
                break;
            } 
            if(maxIndex-minIndex==1) {
                if(point.x < xsort2[minIndex].x) {
                    index = minIndex;
                    break;
                }
                if(point.x > xsort2[maxIndex].x) {
                    index = maxIndex;
                    break;
                }
                if(point.x-xsort2[minIndex].x < xsort2[maxIndex].x-point.x) {
                    index = minIndex;
                    break;
                }
                index = maxIndex;
                break;
            }
            if(point.x < xsort2[index].x) {
                maxIndex = index;
            } else {
                minIndex = index;
            }
        }
        returnIndex = index;
        double tempr;
        for(int i = index; i >= 0 && abs(point.x-xsort2[i].x) < residual; i--) {
            tempr = sqrt(pow(point.x-xsort2[i].x,2)+pow(point.y-xsort2[i].y,2));
            if(tempr < residual) {
                residual = tempr;
                returnIndex = i;
            }
        }
        for(int i = index; i < (int)xsort2.size() && pow(point.x-xsort2[i].x,2) < residual; i++) {
            tempr = sqrt(pow(point.x-xsort2[i].x,2)+pow(point.y-xsort2[i].y,2));
            if(tempr < residual) {
                residual = tempr;
                returnIndex = i;
            }
        }
        return returnIndex;
    }

    void add_pointcloud(sensor_msgs::msg::PointCloud pc) {
        std::vector<geometry_msgs::msg::Point32> v1 = pc.points;
        for(int i = 0; i < (int)v1.size(); i++) {
            int index = closest_point(v1[i],allPoints.points);
            if(sqrt(pow(v1[i].x-allPoints.points[index].x,2)+pow(v1[i].y-allPoints.points[index].y,2)) < 0.01) { //change value
                RCLCPP_INFO(this->get_logger(), "Point Erased", "test2");
                allPoints.points[index].set__x(v1[i].x);
                allPoints.points[index].set__y(v1[i].y);
            } else {
                geometry_msgs::msg::Point32 tempPoint = geometry_msgs::msg::Point32();
                tempPoint.set__x(v1[i].x);
                tempPoint.set__y(v1[i].y);
                allPoints.points.push_back(tempPoint);
            }
        }
    }
    std::shared_ptr<rclcpp::Subscription<sensor_msgs::msg::PointCloud2>> pointCloudSub_;
    sensor_msgs::msg::PointCloud allPoints;
}
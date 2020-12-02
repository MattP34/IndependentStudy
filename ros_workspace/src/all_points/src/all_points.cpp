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
#include "sensor_msgs/msg/laser_scan.hpp"
#include <nav_msgs/msg/odometry.hpp>
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/point_cloud2_iterator.hpp"

using namespace std::chrono_literals;

class AllPointsPublisher : public rclcpp::Node {
    public:
        AllPointsPublisher(): Node("all_points") {
            pointCloudSub_ = this->create_subscription<sensor_msgs::msg::PointCloud2>("/lidar/points",
            rclcpp::QoS(10), std::bind(&AllPointsPublisher::topic_callback, this, std::placeholders::_1));
            laserScanPublisher = this->create_publisher<sensor_msgs::msg::LaserScan>("/scan", rclcpp::SensorDataQoS());
            allPoints = sensor_msgs::msg::PointCloud();
            RCLCPP_INFO(this->get_logger(),"test","test");
        }
    private:
    void topic_callback(std::shared_ptr<const sensor_msgs::msg::PointCloud2> msg) {
        RCLCPP_INFO(this->get_logger(),"test","test");
        //sensor_msgs::msg::PointCloud p1 = sensor_msgs::msg::PointCloud();
        //sensor_msgs::convertPointCloud2ToPointCloud(*msg,p1);
        auto scan_msg = std::make_unique<sensor_msgs::msg::LaserScan>();
        scan_msg->angle_min = M_PI*-1;
        scan_msg->angle_max = M_PI;
        scan_msg->angle_increment = M_PI/100;
        scan_msg->time_increment = 0.0;
        scan_msg->scan_time = 1/50.0;
        scan_msg->range_min = 0.0;
        scan_msg->range_max = std::numeric_limits<double>::infinity();

        scan_msg->header = msg->header;
        scan_msg->header.frame_id = "odom";
        uint32_t ranges_size = std::ceil(
            (scan_msg->angle_max - scan_msg->angle_min) / scan_msg->angle_increment);
        scan_msg->ranges.assign(ranges_size, std::numeric_limits<double>::infinity());
        scan_msg->intensities.assign(ranges_size, 0);
        for (sensor_msgs::PointCloud2ConstIterator<float> iter_x(*msg, "x"),
            iter_y(*msg, "y"), iter_z(*msg, "z"), iter_intensity(*msg,"intensity");
            iter_x != iter_x.end(); ++iter_x, ++iter_y, ++iter_z,++iter_intensity)
        {
            if (std::isnan(*iter_x) || std::isnan(*iter_y) || std::isnan(*iter_z)) {
                RCLCPP_INFO(this->get_logger(),
                    "rejected for nan in point(%f, %f, %f)\n",
                    *iter_x, *iter_y, *iter_z);
                continue;
            }   

            if (*iter_z > 10 || *iter_z < -10) {
                RCLCPP_INFO(this->get_logger(),
                    "rejected for height %f not in range (%f, %f)\n",
                    *iter_z, -10.0, 10.0);
                continue;
            }

            double range = hypot(*iter_x, *iter_y);

            double angle = atan2(*iter_y, *iter_x);
            if (angle < -3.1416 || angle > 3.1416) {
                RCLCPP_INFO(this->get_logger(),
                "rejected for angle %f not in range (%f, %f)\n",
                angle, 3.14, 3/14);
                continue;
            }

            RCLCPP_INFO(this->get_logger(),"angle %f range %f\n",angle,range);

            // overwrite range at laserscan ray if new range is smaller
            int index = ((angle - (-3.141592653589)) / (3.141592653589/50));
            RCLCPP_INFO(this->get_logger(),"index: %i\n",(index));
            RCLCPP_INFO(this->get_logger(),"size: %i\n",(scan_msg->ranges.size()));
            if (range < scan_msg->ranges[index]) {
                scan_msg->ranges[index] = range;
                scan_msg->intensities[index] = *iter_intensity;
            }
        }
        RCLCPP_INFO(this->get_logger(),"publishing","test");
        laserScanPublisher->publish(*scan_msg);
        RCLCPP_INFO(this->get_logger(),"published","test");
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
    std::shared_ptr<rclcpp::Publisher<sensor_msgs::msg::LaserScan>> laserScanPublisher;
    sensor_msgs::msg::PointCloud allPoints;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  //rclcpp::executors::SingleThreadedExecutor exec;
  //std::shared_ptr<rclcpp::Node> brNode = std::make_shared<rclcpp::Node>("tf_test");
  /*exec.add_node(brNode);
  exec.add_node(std::make_shared<OdometryToTF>(brNode));
  exec.spin();*/
  rclcpp::spin(std::make_shared<AllPointsPublisher>());
  rclcpp::shutdown();
  return 0;
}

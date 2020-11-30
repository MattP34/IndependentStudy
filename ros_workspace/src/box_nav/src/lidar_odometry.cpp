// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <math.h>

#include "rclcpp/rclcpp.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "geometry_msgs/msg/point32.hpp"
#include "sensor_msgs/msg/point_cloud.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "sensor_msgs/point_cloud_conversion.hpp"
#include <nav_msgs/msg/odometry.hpp>
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class OdometryFromLidar : public rclcpp::Node
{
public:
  OdometryFromLidar(): Node("odemetry_from_lidar") {
      pointCloudSub_ = this->create_subscription<sensor_msgs::msg::PointCloud2>("/lidar/points",
      rclcpp::QoS(10), std::bind(&OdometryFromLidar::topic_callback, this, std::placeholders::_1));
      lastPoints = sensor_msgs::msg::PointCloud();
  }

private:
    void topic_callback(std::shared_ptr<const sensor_msgs::msg::PointCloud2> msg) {
        sensor_msgs::msg::PointCloud p1;
        sensor_msgs::convertPointCloud2ToPointCloud(*msg,p1);
        std::vector<geometry_msgs::msg::Point32> points = p1.points;
        double x_trans = 0.0, y_trans= 0.0, rotation = 0.0;
        double x_partial = 10; //doesn't really matter as long as while is true
        double y_partial = 10;
        double theta_partial = 10;
        double learning_rate = (double)(msg->header.stamp.nanosec)/1000000000.0*0.1; //tune
        double last_offset = 1000000000; //big_number
        double curr_offset = -5;
        while(x_partial+y_partial+theta_partial > 0.01 || last_offset < curr_offset) { //tune
            if(curr_offset < -1) {
                last_offset = determine_offset(p1,lastPoints);
            } else{
                last_offset = curr_offset;
            }
            x_partial = (determine_offset(transformPointCloudCopy(p1,0.01,0,0),lastPoints)-last_offset)/0.01; //tune
            y_partial = (determine_offset(transformPointCloudCopy(p1,0,0.01,0),lastPoints)-last_offset)/0.01;
            theta_partial = (determine_offset(transformPointCloudCopy(p1,0,0,0.01),lastPoints)-last_offset)/0.01;
            x_trans+=x_partial*learning_rate;
            y_trans+=y_partial*learning_rate;
            rotation+=theta_partial*learning_rate;
            curr_offset = determine_offset(transformPointCloudCopy(p1,x_trans,y_trans,rotation),lastPoints);
        }
    }

    static bool sortX(geometry_msgs::msg::Point32 p1, geometry_msgs::msg::Point32 p2) {
        return p1.x<p2.x;
    }

    static bool sortY(geometry_msgs::msg::Point32 p1, geometry_msgs::msg::Point32 p2) {
        return p1.y<p2.y;
    }

    static double determine_offset_helper(std::vector<geometry_msgs::msg::Point32> v1, std::vector<geometry_msgs::msg::Point32> xsort2) {
        double residualSum = 0.0;
        for(int i = 0; i < v1.size(); i++) {
            int minIndex = 0;
            int maxIndex = xsort2.size();
            int index;
            double xDist = 0.0;
            double yDist = 0.0;
            double residual = 10000000.0; //big number
            while(minIndex != maxIndex) {
                index = (maxIndex-minIndex)/2;
                if(v1[i].x == xsort2[index].x) {
                    break;
                } else if(v1[i].x < xsort2[index].x) {
                    maxIndex = index;
                } else {
                    minIndex = index;
                }
            }
            double tempr;
            for(int j = index; j >= 0 && pow(v1[i].x-xsort2[j].x,2) < residual; j--) {
                tempr = pow(v1[i].x-xsort2[j].x,2)+pow(v1[i].y-xsort2[i].y,2);
                if(tempr < residual) {
                    residual = tempr;
                }
            }
            for(int j = index; j < xsort2.size() && pow(v1[i].x-xsort2[j].x,2) < residual; j++) {
                tempr = pow(v1[i].x-xsort2[j].x,2)+pow(v1[i].y-xsort2[i].y,2);
                if(tempr < residual) {
                    residual = tempr;
                }
            }
            residualSum+=residual;
        }
        return residualSum;
    }

    double determine_offset(sensor_msgs::msg::PointCloud  pc1, sensor_msgs::msg::PointCloud  pc2) {
        std::vector<geometry_msgs::msg::Point32> v1 = pc1.points;
        std::vector<geometry_msgs::msg::Point32> v2 = pc1.points;
        std::vector<geometry_msgs::msg::Point32> xsort1 = std::vector<geometry_msgs::msg::Point32>(v1.size());
        for(int i = 0; i < xsort1.size(); i++) {
            xsort1[i] = v1[i];
        }
        std::sort(xsort1.begin(),xsort1.end(),sortX);
        std::vector<geometry_msgs::msg::Point32> xsort2 = std::vector<geometry_msgs::msg::Point32>(v2.size());
        for(int i = 0; i < xsort2.size(); i++) {
            xsort2[i] = v2[i];
        }
        std::sort(xsort2.begin(),xsort2.end(),sortX);
        return determine_offset_helper(v1,xsort2)+(v2,xsort1);
    }

    void transformPointCloud(sensor_msgs::msg::PointCloud pc, double x, double y, double theta) {
        for(int i = 0; i < pc.points.size(); i++) {
            pc.points[i].set__x(pc.points[i].x+x);
            pc.points[i].set__y(pc.points[i].y+y);
            pc.points[i].set__x(cos(theta)*pc.points[i].x-sin(theta)*pc.points[i].y);
            pc.points[i].set__y(sin(theta)*pc.points[i].x+cos(theta)*pc.points[i].y);
        }
    }

    sensor_msgs::msg::PointCloud transformPointCloudCopy(sensor_msgs::msg::PointCloud pc, double x, double y, double theta) {
        sensor_msgs::msg::PointCloud pcCopy = sensor_msgs::msg::PointCloud();
        for(int i = 0; i < pc.points.size(); i++) {
            geometry_msgs::msg::Point32 p = geometry_msgs::msg::Point32();
            p.set__x(pc.points[i].x);
            p.set__y(pc.points[i].y);
            p.set__z(pc.points[i].z);
            pcCopy.points.push_back(p);
        }
        transformPointCloud(pcCopy,x,y,theta);
        return pcCopy;
    }
    sensor_msgs::msg::PointCloud lastPoints;
    std::shared_ptr<rclcpp::Subscription<sensor_msgs::msg::PointCloud2>> pointCloudSub_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  //rclcpp::executors::SingleThreadedExecutor exec;
  //std::shared_ptr<rclcpp::Node> brNode = std::make_shared<rclcpp::Node>("tf_test");
  /*exec.add_node(brNode);
  exec.add_node(std::make_shared<OdometryToTF>(brNode));
  exec.spin();*/
  //rclcpp::spin(std::make_shared<OdometryToTF>(brNode));
  rclcpp::shutdown();
  return 0;
}

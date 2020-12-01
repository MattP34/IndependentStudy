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
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/transform_broadcaster.h"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "geometry_msgs/msg/point32.hpp"
#include "sensor_msgs/msg/point_cloud.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "sensor_msgs/point_cloud_conversion.hpp"
#include <nav_msgs/msg/odometry.hpp>
#include "std_msgs/msg/string.hpp"

#include <pointcloud_to_laserscan/laserscan_to_pointcloud_node.hpp>

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class OdometryFromLidar : public rclcpp::Node
{
public:
  OdometryFromLidar(): Node("odemetry_from_lidar") {
      pointCloudSub_ = this->create_subscription<sensor_msgs::msg::PointCloud2>("/lidar/points",
      rclcpp::QoS(10), std::bind(&OdometryFromLidar::topic_callback, this, std::placeholders::_1));
      pointCloudPublisher_ = this->create_publisher<sensor_msgs::msg::PointCloud>("total_point_cloud", rclcpp::QoS(10));
      lastPoints = sensor_msgs::msg::PointCloud();
      allPoints = sensor_msgs::msg::PointCloud();
      allPoints.header.set__frame_id("X1/base_link/front_laser");
      x_pos = 0;
      y_pos = 0;
      theta = 0;
      last_time = 0;
  }

private:
    void topic_callback(std::shared_ptr<const sensor_msgs::msg::PointCloud2> msg) {
        RCLCPP_INFO(this->get_logger(), "published: 1 ", "test2");
        sensor_msgs::msg::PointCloud p1 = sensor_msgs::msg::PointCloud();
        sensor_msgs::convertPointCloud2ToPointCloud(*msg,p1);
        for(int i = 0; i < p1.points.size(); i++) {
            if(isinf(p1.points[i].x) || isinf(p1.points[i].y)) {
                p1.points.erase(p1.points.begin() + i);
                i--;            
            }
        }
        if(lastPoints.points.size()==0) {
            lastPoints = p1;
            allPoints = p1;
            last_time = (double)(msg->header.stamp.nanosec)/1000000000.0;
            return;
        }
        for(int i = 0; i < p1.points.size(); i++) {
            RCLCPP_INFO(this->get_logger(), "point:" + std::to_string(i)+" x:"+std::to_string(p1.points[i].x)+" y:"+std::to_string(p1.points[i].y), "test2");
        }
        for(int i = 0; i < allPoints.points.size(); i++) {
            RCLCPP_INFO(this->get_logger(), "lastPoints:" + std::to_string(i)+" x:"+std::to_string(lastPoints.points[i].x)+" y:"+std::to_string(lastPoints.points[i].y), "test2");
        }
        std::vector<geometry_msgs::msg::Point32> points = p1.points;
        double x_trans = 0.0, y_trans= 0.0, rotation = 0.0;
        double x_partial = 10; //doesn't really matter as long as while is true
        double y_partial = 10;
        double theta_partial = 10;
        double learning_rate = 0.01;//(last_time-(double)(msg->header.stamp.nanosec)/1000000000.0)*0.1; //tune
        double last_offset = 1000000000; //big_number
        double curr_offset = -5;
        RCLCPP_INFO(this->get_logger(), "published: 1 ", "test2");
        while(abs(x_partial)+abs(y_partial)+abs(theta_partial) > 0.0001) { //tune
            RCLCPP_INFO(this->get_logger(), "published: 7", "test2");
            if(curr_offset < -1) {
                last_offset = determine_offset(transformPointCloudCopy(p1,x_pos,y_pos,theta),lastPoints);
            } else{
                last_offset = curr_offset;
            }
            x_partial = (determine_offset(transformPointCloudCopy(p1,x_pos+x_trans+0.00001,y_pos+y_trans,theta+rotation),lastPoints)-last_offset)/0.00001; //tune
            RCLCPP_INFO(this->get_logger(), "published: 10", "test2");
            y_partial = (determine_offset(transformPointCloudCopy(p1,x_pos+x_trans,y_pos+y_trans+0.00001,theta+rotation),lastPoints)-last_offset)/0.00001; //tune
            theta_partial = (determine_offset(transformPointCloudCopy(p1,x_pos+x_trans,y_pos+y_trans,theta+rotation+0.00001),lastPoints)-last_offset)/0.00001; //tune
            RCLCPP_INFO(this->get_logger(), "partials:"+std::to_string(x_partial)+" "+std::to_string(y_partial)+ " "+std::to_string(theta_partial), "test2");
            curr_offset = determine_offset(transformPointCloudCopy(p1,x_pos+x_trans-x_partial*learning_rate,y_pos+y_trans-y_partial*learning_rate,theta+rotation-theta_partial*learning_rate),lastPoints);
            RCLCPP_INFO(this->get_logger(), "offsets:"+std::to_string(last_offset)+" "+std::to_string(curr_offset), "test2");
            RCLCPP_INFO(this->get_logger(), "Positions :"+std::to_string(x_partial*learning_rate*-1)+" "+std::to_string(y_partial*learning_rate*-1) + " "+std::to_string(theta_partial*learning_rate*-1), "test2");
            if(curr_offset > last_offset) {
                break;
            }
            RCLCPP_INFO(this->get_logger(), "published: 14:"+std::to_string(abs(x_partial)+abs(y_partial)+abs(theta_partial)), "test2");
            x_trans+=x_partial*learning_rate*-1;
            y_trans+=y_partial*learning_rate*-1;
            rotation+=theta_partial*learning_rate*-1;
            RCLCPP_INFO(this->get_logger(), "rotation:"+std::to_string(rotation), "test2");
        }
        RCLCPP_INFO(this->get_logger(), "published: 6", "test2");
        this->x_pos += x_trans;
        this->y_pos += y_trans;
        this->theta += rotation;
        x_trans = 0.0;
        y_trans= 0.0;
        rotation = 0.0;
        x_partial = 10; //doesn't really matter as long as while is true
        y_partial = 10;
        theta_partial = 10;
        learning_rate = 0.01;//(double)(msg->header.stamp.nanosec)/1000000000.0*0.1; //tune
        last_offset = 1000000000; //big_number
        curr_offset = -5;
        while(abs(x_partial)+abs(y_partial)+abs(theta_partial) > 0.0001) { //tune
            RCLCPP_INFO(this->get_logger(), "published: 7", "test2");
            if(curr_offset < -1) {
                last_offset = determine_offset(transformPointCloudCopy(p1,x_pos,y_pos,theta),allPoints);
            } else{
                last_offset = curr_offset;
            }
            x_partial = (determine_offset(transformPointCloudCopy(p1,x_pos+x_trans+0.00001,y_pos+y_trans,theta+rotation),allPoints)-last_offset)/0.00001; //tune
            RCLCPP_INFO(this->get_logger(), "published: 10", "test2");
            y_partial = (determine_offset(transformPointCloudCopy(p1,x_pos+x_trans,y_pos+y_trans+0.00001,theta+rotation),allPoints)-last_offset)/0.00001; //tune
            theta_partial = (determine_offset(transformPointCloudCopy(p1,x_pos+x_trans,y_pos+y_trans,theta+rotation+0.000001),allPoints)-last_offset)/0.000001; //tune
            RCLCPP_INFO(this->get_logger(), "partials:"+std::to_string(x_partial)+" "+std::to_string(y_partial)+ " "+std::to_string(theta_partial), "test2");
            curr_offset = determine_offset(transformPointCloudCopy(p1,x_pos+x_trans-x_partial*learning_rate,y_pos+y_trans-y_partial*learning_rate,theta+rotation-theta_partial*learning_rate),allPoints);
            RCLCPP_INFO(this->get_logger(), "offsets:"+std::to_string(last_offset)+" "+std::to_string(curr_offset), "test2");
            RCLCPP_INFO(this->get_logger(), "Positions :"+std::to_string(x_partial*learning_rate*-1)+" "+std::to_string(y_partial*learning_rate*-1) + " "+std::to_string(theta_partial*learning_rate*-1), "test2");
            if(curr_offset > last_offset) {
                break;
            }
            RCLCPP_INFO(this->get_logger(), "published: 14:"+std::to_string(abs(x_partial)+abs(y_partial)+abs(theta_partial)), "test2");
            x_trans+=x_partial*learning_rate*-1;
            y_trans+=y_partial*learning_rate*-1;
            rotation+=theta_partial*learning_rate*-1;
            RCLCPP_INFO(this->get_logger(), "rotation:"+std::to_string(rotation), "test2");
        }
        RCLCPP_INFO(this->get_logger(), "published: 8", "test2");
        this->x_pos += x_trans;
        this->y_pos += y_trans;
        this->theta += rotation;
        tf2::Quaternion q;
        q.setRPY(0,0,rotation);
        tf2_ros::TransformBroadcaster br = tf2_ros::TransformBroadcaster(Node("test_tf"));
        geometry_msgs::msg::TransformStamped transformStamped;
        transformStamped.header.stamp.sec = msg->header.stamp.sec;
        transformStamped.header.stamp.nanosec = msg->header.stamp.nanosec;
        transformStamped.header.frame_id = "map";
        transformStamped.child_frame_id = msg->header.frame_id;
        transformStamped.transform.translation.x = this->x_pos;
        transformStamped.transform.translation.y = this->y_pos;
        transformStamped.transform.translation.z = 0.0;
        transformStamped.transform.rotation.x = q.getX();
        transformStamped.transform.rotation.y = q.getY();
        transformStamped.transform.rotation.z = q.getZ();
        transformStamped.transform.rotation.w = q.getW();
        br.sendTransform(transformStamped);
        add_pointcloud(transformPointCloudCopy(p1,x_pos,y_pos,theta));
        transformPointCloud(p1,x_pos,y_pos,theta);
        lastPoints = p1;
        last_time = (double)(msg->header.stamp.nanosec)/1000000000.0;
        sensor_msgs::msg::PointCloud exportCloud = transformPointCloudCopy(allPoints,x_pos*-1,y_pos*-1,theta*-1);
        exportCloud.header.set__stamp(msg->header.stamp);
        exportCloud.header.set__frame_id("X1/base_link/front_laser");
        pointCloudPublisher_->publish(exportCloud);
        RCLCPP_INFO(this->get_logger(), "position:"+std::to_string(x_pos)+" "+std::to_string(y_pos), "test2");
    }

    static bool sortX(geometry_msgs::msg::Point32 p1, geometry_msgs::msg::Point32 p2) {
        return p1.x<p2.x;
    }

    static bool sortY(geometry_msgs::msg::Point32 p1, geometry_msgs::msg::Point32 p2) {
        return p1.y<p2.y;
    }

    int closest_point(geometry_msgs::msg::Point32 point, std::vector<geometry_msgs::msg::Point32> xsort2) {
        int minIndex = 0;
        int maxIndex = xsort2.size()-1;
        int index = 0;
        //double xDist = 0.0;
        //double yDist = 0.0;
        double residual = 10000000.0; //big number
        int returnIndex = 0;
        //geometry_msgs::msg::Point32 returnPoint = geometry_msgs::msg::Point32();
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
                //returnPoint.set__x(xsort2[i].x);S
                //returnPoint.set__y(xsort2[i].y);
            }
        }
        for(int i = index; i < (int)xsort2.size() && pow(point.x-xsort2[i].x,2) < residual; i++) {
            tempr = sqrt(pow(point.x-xsort2[i].x,2)+pow(point.y-xsort2[i].y,2));
            if(tempr < residual) {
                residual = tempr;
                returnIndex = i;
                //returnPoint.set__x(xsort2[i].x);
                //returnPoint.set__y(xsort2[i].y);
            }
        }
        RCLCPP_INFO(this->get_logger(), "1st_Point:x:" +std::to_string(point.x)+" y:"+std::to_string(point.y), "test2");
        RCLCPP_INFO(this->get_logger(), "closest_pair:x:"+std::to_string(xsort2[returnIndex].x)+" y:"+std::to_string(xsort2[returnIndex].y), "test2");
        return returnIndex;
    }

    double determine_offset_helper(std::vector<geometry_msgs::msg::Point32> v1, std::vector<geometry_msgs::msg::Point32> xsort2) {
        double residualSum = 0.0;
        for(int i = 0; i < (int)v1.size(); i++) {
            /*int minIndex = 0;
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
            residualSum+=residual;*/
            int index = closest_point(v1[i],xsort2);
            residualSum += sqrt(pow(v1[i].x-xsort2[index].x,2)+pow(v1[i].y-xsort2[index].y,2));
        }
        return residualSum/v1.size();
    }

    void add_pointcloud(sensor_msgs::msg::PointCloud pc) {
        std::vector<geometry_msgs::msg::Point32> v1 = pc.points;
        for(int i = 0; i < (int)v1.size(); i++) {
            int index = closest_point(v1[i],allPoints.points);
            if(sqrt(pow(v1[i].x-allPoints.points[index].x,2)+pow(v1[i].y-allPoints.points[index].y,2)) < 0.005) { //change value
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

    double determine_offset(sensor_msgs::msg::PointCloud  pc1, sensor_msgs::msg::PointCloud pc2) {
        std::vector<geometry_msgs::msg::Point32> v1 = pc1.points;
        std::vector<geometry_msgs::msg::Point32> v2 = pc2.points;
        std::vector<geometry_msgs::msg::Point32> xsort1 = std::vector<geometry_msgs::msg::Point32>(v1.size());
        for(int i = 0; i < (int)xsort1.size(); i++) {
            xsort1[i] = v1[i];
        }
        std::sort(xsort1.begin(),xsort1.end(),sortX);
        std::vector<geometry_msgs::msg::Point32> xsort2 = std::vector<geometry_msgs::msg::Point32>(v2.size());
        for(int i = 0; i < (int)xsort2.size(); i++) {
            xsort2[i] = v2[i];
        }
        std::sort(xsort2.begin(),xsort2.end(),sortX);
        return determine_offset_helper(v1,xsort2);
    }

    void transformPointCloud(sensor_msgs::msg::PointCloud &pc, double x, double y, double theta) {
        for(int i = 0; i < (int)pc.points.size(); i++) {
            pc.points[i].set__x(pc.points[i].x+x);
            pc.points[i].set__y(pc.points[i].y+y);
            pc.points[i].set__x(cos(theta)*pc.points[i].x-sin(theta)*pc.points[i].y);
            pc.points[i].set__y(sin(theta)*pc.points[i].x+cos(theta)*pc.points[i].y);
        }
    }

    sensor_msgs::msg::PointCloud transformPointCloudCopy(sensor_msgs::msg::PointCloud pc, double x, double y, double theta) {
        sensor_msgs::msg::PointCloud pcCopy = sensor_msgs::msg::PointCloud();
        for(int i = 0; i < (int)pc.points.size(); i++) {
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
    sensor_msgs::msg::PointCloud allPoints;
    std::shared_ptr<rclcpp::Subscription<sensor_msgs::msg::PointCloud2>> pointCloudSub_;
    std::shared_ptr<rclcpp::Publisher<sensor_msgs::msg::PointCloud>> pointCloudPublisher_;
    double x_pos, y_pos, theta;
    double last_time;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  //rclcpp::executors::SingleThreadedExecutor exec;
  //std::shared_ptr<rclcpp::Node> brNode = std::make_shared<rclcpp::Node>("tf_test");
  /*exec.add_node(brNode);
  exec.add_node(std::make_shared<OdometryToTF>(brNode));
  exec.spin();*/
  rclcpp::spin(std::make_shared<OdometryFromLidar>());
  rclcpp::shutdown();
  return 0;
}

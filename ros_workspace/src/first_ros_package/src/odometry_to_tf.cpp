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

#include "rclcpp/rclcpp.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include <nav_msgs/msg/odometry.hpp>
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class OdometryToTF : public rclcpp::Node
{
public:
  OdometryToTF(std::shared_ptr<rclcpp::Node> brNode_): Node("odemetry_to_tf") {
    odometrySubscription_ = this->create_subscription<nav_msgs::msg::Odometry>("/model/X1/odometry",
      rclcpp::QoS(10), std::bind(&OdometryToTF::topic_callback, this, std::placeholders::_1));
    this->brNode = brNode_;
    RCLCPP_INFO(this->get_logger(), "test: ", "hi");
    //publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
    //timer_ = this->create_wall_timer(
    //  500ms, std::bind(&MinimalPublisher::timer_callback, this));
  }

private:
  void topic_callback(std::shared_ptr<const nav_msgs::msg::Odometry> msg) {
    
    tf2_ros::TransformBroadcaster br = tf2_ros::TransformBroadcaster(Node("test_tf"));
    geometry_msgs::msg::TransformStamped transformStamped;
    transformStamped.header.stamp.sec = msg->header.stamp.sec;
    transformStamped.header.stamp.nanosec = msg->header.stamp.nanosec;
    transformStamped.header.frame_id = "map";
    transformStamped.child_frame_id = msg->child_frame_id;
    transformStamped.transform.translation.x = msg->pose.pose.position.x;
    transformStamped.transform.translation.y = msg->pose.pose.position.y;
    transformStamped.transform.translation.z = 0.0;
    transformStamped.transform.rotation.x = msg->pose.pose.orientation.x;
    transformStamped.transform.rotation.y = msg->pose.pose.orientation.y;
    transformStamped.transform.rotation.z = msg->pose.pose.orientation.z;
    transformStamped.transform.rotation.w = msg->pose.pose.orientation.w;

    geometry_msgs::msg::TransformStamped transformStamped2;
    transformStamped2.header.stamp.sec = msg->header.stamp.sec;
    transformStamped2.header.stamp.nanosec = msg->header.stamp.nanosec;
    transformStamped2.header.frame_id = msg->child_frame_id;
    transformStamped2.child_frame_id = "X1/base_link/front_laser";
    transformStamped2.transform.translation.x = 0.08;
    transformStamped2.transform.translation.y = 0;
    transformStamped2.transform.translation.z = 0.394-0.062;
    transformStamped2.transform.rotation.x = 0;
    transformStamped2.transform.rotation.y = 0;
    transformStamped2.transform.rotation.z = 0;
    transformStamped2.transform.rotation.w = 1;
    RCLCPP_INFO(this->get_logger(), "published: ", "test");
    br.sendTransform(transformStamped);
    br.sendTransform(transformStamped2);
  }
  std::shared_ptr<rclcpp::Node> brNode;
  std::shared_ptr<rclcpp::Subscription<nav_msgs::msg::Odometry>> odometrySubscription_;
  /*rclcpp::TimerBase::SharedPtr timer_;*/
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  //rclcpp::executors::SingleThreadedExecutor exec;
  std::shared_ptr<rclcpp::Node> brNode = std::make_shared<rclcpp::Node>("tf_test");
  /*exec.add_node(brNode);
  exec.add_node(std::make_shared<OdometryToTF>(brNode));
  exec.spin();*/
  rclcpp::spin(std::make_shared<OdometryToTF>(brNode));
  rclcpp::shutdown();
  return 0;
}

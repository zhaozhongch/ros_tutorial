#include "ros/ros.h"
#include "std_msgs/Float64MultiArray.h" //#include "std_msgs/String.h"

void chatterCallback(const std_msgs::Float64MultiArray::ConstPtr& msg) //void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("I heard: [%f], [%f]", msg->data[0], msg->data[1]); //ROS_INFO("I heard: [%f]", msg->data.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");

  ros::NodeHandle n;

  ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);

  ros::spin();

  return 0;
}
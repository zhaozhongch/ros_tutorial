#include "ros/ros.h"
#include "std_msgs/Int8.h" //#include "std_msgs/String.h"

void chatterCallback(const std_msgs::Int8::ConstPtr& msg) //void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("I heard: [%d]", msg->data); //ROS_INFO("I heard: [%f]", msg->data.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");

  ros::NodeHandle n;

  ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);

  ros::spin();

  return 0;
}
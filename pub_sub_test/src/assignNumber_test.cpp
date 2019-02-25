#include "ros/ros.h"
#include "std_msgs/Float64MultiArray.h" //#include "std_msgs/String.h"
#include "std_msgs/Header.h"

#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");

  ros::NodeHandle n;

  ros::Publisher chatter_pub = n.advertise<std_msgs::Float64MultiArray>("chatter", 1000); //ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);

  ros::Rate loop_rate(10);

  int count = 0;
  uint32_t count2 = 1;

  while (ros::ok())
  {
    std_msgs::Float64MultiArray msg; //std_msgs::String msg;

    std_msgs::Header msg_header;

    msg_header.seq = count2;

    msg_header.stamp = ros::Time::now();

    ROS_INFO("I have published array data"); //ROS_INFO("%f", msg.data.c_str())

    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }


  return 0;
}
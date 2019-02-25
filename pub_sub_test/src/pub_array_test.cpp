#include "ros/ros.h"
#include "std_msgs/Float64MultiArray.h" //#include "std_msgs/String.h"

#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");

  ros::NodeHandle n;

  ros::Publisher chatter_pub = n.advertise<std_msgs::Float64MultiArray>("chatter", 1000); //ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);

  ros::Rate loop_rate(10);

  int count = 0;

  double testArray[5] = {1,2,3,4,5}; //create an array to publish

  while (ros::ok())
  {
    std_msgs::Float64MultiArray msg; //std_msgs::String msg;

    // std::stringstream ss;
    // ss << "hello world " << count;
    msg.data = testArray;// msg.data = ss.str();


    ROS_INFO("I have published array data"); //ROS_INFO("%f", msg.data.c_str())

    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }


  return 0;
}
#include "ros/ros.h"
#include "std_msgs/Int8.h" //#include "std_msgs/String.h"

#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");

  ros::NodeHandle n;

  ros::Publisher chatter_pub = n.advertise<std_msgs::Int8>("chatter", 1000); //ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);

  ros::Rate loop_rate(10);

  int count = 0;
  while (ros::ok())
  {
    std_msgs::Int8 msg; //std_msgs::String msg;

    // std::stringstream ss;
    // ss << "hello world " << count;
    msg.data = count;// msg.data = ss.str();


    ROS_INFO("%d", msg.data); //ROS_INFO("%f", msg.data.c_str())

    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }


  return 0;
}
#include "ros/ros.h"
#include "pub_sub_test/MyBasicMessage.h" //#include "std_msgs/String.h"

#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");

  ros::NodeHandle n;

  ros::Publisher chatter_pub = n.advertise<pub_sub_test::MyBasicMessage>("chatter", 1000); //ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);

  ros::Rate loop_rate(10);

  int count = 0;
  double data2 = 1;
  while (ros::ok())
  {
    pub_sub_test::MyBasicMessage msg; //std_msgs::String msg;

    // std::stringstream ss;
    // ss << "hello world " << count;
    msg.message_id = "1";
    msg.message_data1 = count;
    msg.message_data2.push_back(data2);


    ROS_INFO("%ld", msg.message_data1); //ROS_INFO("%f", msg.data.c_str())

    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }


  return 0;
}
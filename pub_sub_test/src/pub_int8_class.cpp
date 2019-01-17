#include "ros/ros.h"
#include "std_msgs/Int8.h"

class pubInt8{
public:
    pubInt8(ros::NodeHandle& nh){
        chatter_pub = nh.advertise<std_msgs::Int8>("chatter", 1000); //assign value to chatter_pub
    };

    void pub(){
        int count = 0;
        ros::Rate loop_rate(10);
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
    }

private:
    ros::Publisher chatter_pub;//set the publisher as a member
};

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");

  ros::NodeHandle n;

  pubInt8 p8(n);

  p8.pub();

  return 0;
}
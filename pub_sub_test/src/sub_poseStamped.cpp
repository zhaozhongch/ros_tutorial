#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h" 

void chatterCallback(const geometry_msgs::PoseStamped::ConstPtr& msg) //Note it is geometry_msgs::PoseStamped, not std_msgs::PoseStamped
{
    ROS_INFO("I heard the pose from the robot"); 
    ROS_INFO("the position(x,y,z) is %f , %f, %f", msg->pose.position.x, msg->pose.position.y, msg->pose.position.z);
    ROS_INFO("the orientation(x,y,z,w) is %f , %f, %f, %f", msg->pose.orientation.x, msg->pose.orientation.y, msg->pose.orientation.z, msg->pose.orientation.w);
    ROS_INFO("the time we get the pose is %f",  msg->header.stamp.sec + 1e-9*msg->header.stamp.nsec);

    std::cout<<"\n \n"<<std::endl; //add two more blank row so that we can see the message more clearly
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "listener");

    ros::NodeHandle n;

    ros::Subscriber sub = n.subscribe("chatter", 10, chatterCallback);

    ros::spin();

    return 0;
}
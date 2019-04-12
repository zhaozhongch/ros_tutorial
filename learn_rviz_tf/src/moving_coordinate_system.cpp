#include <ros/ros.h>
#include <tf2_ros/static_transform_broadcaster.h>
#include <geometry_msgs/TransformStamped.h>
#include <tf2_ros/transform_broadcaster.h>
#include <geometry_msgs/PoseStamped.h>
#include <visualization_msgs/Marker.h>
#include <tf2/LinearMath/Quaternion.h>

class MovingObject{
public:
    MovingObject(ros::NodeHandle& nh);
    void PoseCallback(const geometry_msgs::PoseStamped::ConstPtr& msg);
    void set_marker_fixed_property();
private:
    ros::Publisher pub_object_;
    visualization_msgs::Marker mk_;
    tf2_ros::TransformBroadcaster br_;
};

int main(int argc, char** argv){
    ros::init(argc, argv, "tf2_broadcaster");

    ros::NodeHandle nh;

    MovingObject mo(nh);

    ros::Subscriber sub_gps = nh.subscribe("/chatter", 10, &MovingObject::PoseCallback, &mo);
  
    ros::spin();
}

MovingObject::MovingObject(ros::NodeHandle& nh){
    pub_object_ = nh.advertise<visualization_msgs::Marker>("visualization_marker", 10);
    set_marker_fixed_property();
}

void MovingObject::PoseCallback(const geometry_msgs::PoseStamped::ConstPtr& msg){
    ROS_INFO("get gps position, %f, %f, %f", msg->pose.position.x, msg->pose.position.y, msg->pose.position.z);
    geometry_msgs::TransformStamped transformStamped;
    transformStamped.header.stamp = ros::Time::now();
    transformStamped.header.frame_id = "world";
    transformStamped.child_frame_id = "gps";
    transformStamped.transform.translation.x = msg->pose.position.x - 0.1;
    transformStamped.transform.translation.y = msg->pose.position.y;
    transformStamped.transform.translation.z = msg->pose.position.z;
    transformStamped.transform.rotation.w = msg->pose.orientation.w;
    transformStamped.transform.rotation.x = msg->pose.orientation.x;
    transformStamped.transform.rotation.y = msg->pose.orientation.y;
    transformStamped.transform.rotation.z = msg->pose.orientation.z;
    br_.sendTransform(transformStamped);

    mk_.header.stamp = ros::Time();
    mk_.pose = msg->pose;
    pub_object_.publish(mk_);
}

void MovingObject::set_marker_fixed_property(){
    mk_.ns = "my_namespace";
    mk_.id = 0;
    mk_.header.frame_id = "world";
    mk_.type = visualization_msgs::Marker::CUBE;

    mk_.scale.x = 0.5;
    mk_.scale.y = 0.5;
    mk_.scale.z = 0.5;

    mk_.color.a = 0.3; 
    mk_.color.r = 0.0;
    mk_.color.g = 1.0;
    mk_.color.b = 0.0;

    mk_.action = visualization_msgs::Marker::ADD;
}
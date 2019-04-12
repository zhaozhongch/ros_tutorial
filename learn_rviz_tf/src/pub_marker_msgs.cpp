#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"
#include "visualization_msgs/Marker.h"

class MarkerPublisher{
public:
    MarkerPublisher(ros::NodeHandle& nh){
        pub_marker_ = nh.advertise<visualization_msgs::Marker>("visualization_marker", 10);//initialize marker publisher
        set_marker_fixed_property();
    };
    void PoseCallback(const geometry_msgs::PoseStamped::ConstPtr& msg){
        count_++;
        marker_.ns = "my_namespace";
        marker_.id = count_;
        
        marker_.header.stamp = ros::Time();
        marker_.pose = msg->pose;

        pub_marker_.publish(marker_);
    };
    void set_marker_fixed_property(){
        /*decide from which view we can see the marker*/
        marker_.header.frame_id = "my_frame";
        /*set marker type*/
        marker_.type = visualization_msgs::Marker::SPHERE;
        /*decide if the marker will be enlarge*/
        marker_.scale.x = 1;
        marker_.scale.y = 0.1;
        marker_.scale.z = 0.1;
        /*decide the color of the marker*/
        marker_.color.a = 1.0; // Don't forget to set the alpha!
        marker_.color.r = 0.0;
        marker_.color.g = 1.0;
        marker_.color.b = 0.0;
        /*set marker action*/
        marker_.action = visualization_msgs::Marker::ADD;
    };

private:
    ros::Publisher  pub_marker_;
    visualization_msgs::Marker marker_;
    int count_ = 0;
};




int main(int argc, char **argv){

    ros::init(argc, argv, "marker_worker");

    ros::NodeHandle n;

    MarkerPublisher mp(n);

    ros::Subscriber sub_pose   = n.subscribe("chatter", 100, &MarkerPublisher::PoseCallback, &mp);

    ros::spin();
}
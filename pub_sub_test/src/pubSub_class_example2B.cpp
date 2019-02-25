#include "ros/ros.h"
#include "std_msgs/Float64.h"

class tl1{
public:
    tl1();
    void registerNodeHandle(ros::NodeHandle& _nh);
    void registerPubSub();
    void fCallback(const std_msgs::Float64::ConstPtr& msg);
private:
    ros::Publisher pub_f64;
    ros::Subscriber sub_f64;
    ros::NodeHandle nh;
};

int main(int argc, char **argv){

    ros::init(argc, argv, "talker_listener2");

    ros::NodeHandle nh;

    tl1 pubSub1;

    pubSub1.registerNodeHandle(nh);
    pubSub1.registerPubSub();

    ros::spin();
}

tl1::tl1(){};

void tl1::registerNodeHandle(ros::NodeHandle& _nh){
    nh = _nh;
};

void tl1::registerPubSub(){
    pub_f64 = nh.advertise<std_msgs::Float64>("chatter2to1",1000);
    sub_f64 = nh.subscribe("chatter1to2",1000,&tl1::fCallback, this); //this pointer here means the class itself
};

//When you receive some data, it is highly possible you do some operations on that data and then publish something in/after the call back function
void tl1::fCallback(const std_msgs::Float64::ConstPtr& msg){
    std::cout<<"talker_listener2 heard "<<msg->data<<std::endl;

    std_msgs::Float64 pubData;

    pubData.data = msg->data + 1;

    ros::Rate sr(10);
    pub_f64.publish(pubData);
    sr.sleep();
};

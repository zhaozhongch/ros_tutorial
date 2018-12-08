#include <iostream>

class poorPhd{
public:
    /*define constructor*/
    poorPhd(){
        std::cout<<"we create a poor phd class"<<std::endl;
    }

    /*public member variable*/
    int hairNumber = 100;

    /*public member function*/
    int getGirlFriendNumber(){
        return girlFriendNumber;
    }

private:
    /*private member variable*/
    int girlFriendNumber = 0;
};

class master1 {
public:
    /*define constructor*/
    master1(){
        std::cout<<"we create a master class"<<std::endl;
    }
    /*member variable*/
    poorPhd future;
};


int main(){
    /*define the object*/
    master1 mStudent1;

    /*use inheritance*/
    std::cout<<"hairNumber of master student 1 is "<<mStudent1.future.hairNumber<<std::endl;
}
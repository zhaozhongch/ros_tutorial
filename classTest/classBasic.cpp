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

int main(){
    /*define the object*/
    poorPhd phd;//will use constructor function 
 
    /*call the public memberfunction*/
    std::cout<<"girlFriendnNumber is "<<phd.getGirlFriendNumber()<<std::endl;

    /*change tha value of member variale*/
    phd.hairNumber = 101;

    /*call the member variable*/
    std::cout<<"hairNumber is "<<phd.hairNumber<<std::endl;

    /*define class pointer*/
    poorPhd *phdPointer;

    /*assign the pointer to an object*/
    phdPointer = &phd;

    /*call the member variable*/
    std::cout<<"use pointer, hair number is "<<phdPointer->hairNumber<<std::endl;
}
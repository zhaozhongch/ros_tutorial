#include <iostream>

/*define a phd namespace*/
namespace phd {

    /*define a student class in phd namespace*/
    class student{
    public:
        student(){
            std::cout<<"create a student class in phd namespace"<<std::endl;
        }
        int graduateYear = 5;
        int hairNumber   = 100;
    };
}

/*define a master namespace*/
namespace master{

    /*define a student class in master namespace*/
    class student{
    public:
        student(){
            std::cout<<"create a student class in master namespace"<<std::endl;
        }
        int graduateYear = 2;
        int hairNumber   = 10000;
    };
}

int main(){

    /*create an object of student class, in phd namespace*/
    phd::student     phdStudent;

    /*create an object of student class, in master namespace*/
    master::student  masterStudent;

    std::cout<<"phd normally graduate in "<<phdStudent.graduateYear<<" years"<<std::endl;

    std::cout<<"master normally graduate in "<<masterStudent.graduateYear<<" years"<<std::endl;
}
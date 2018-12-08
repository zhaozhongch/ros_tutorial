#include <iostream>

template <typename T>
class square{
public:
    T a;
    /*constructor function will store _a*_a as public member a*/
    square(T _a){
        a = _a*_a;
    }
};


int main(){
    double x = 5.5;
    square<double> test(x);
    std::cout<<"the square of "<<x<<" is "<<test.a<<std::endl;
}

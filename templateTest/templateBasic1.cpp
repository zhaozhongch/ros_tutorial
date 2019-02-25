#include <iostream>

template <class T>
T square(T a){
    return a*a;
}


int main(){
    double x = 5.3;
    std::cout<<"square of "<<x<<" is "<<square(x)<<std::endl;
}
#include <iostream>
#include <vector>

template <typename T, typename U>
class addVector{
public:
    U result;
    addVector(T vec1, U vec2){

    if(vec1.size()!=vec2.size()){
        std::cout<<"cannot add two vector, they must be the same length. Return a null vector"<<std::endl;
    }

    for(int i = 0; i<vec1.size(); i++){
            result.push_back(vec1[i]+vec2[i]);
        }
    }
};

int main(){
    std::vector<int> vec1 = {1,2,3};
    std::vector<double> vec2 = {4.0,5.0,6.0};

    addVector<std::vector<int>, std::vector<double> > test(vec1,vec2);

    for(auto i:test.result)
        std::cout<<i<<",";

    std::cout<<std::endl;
}

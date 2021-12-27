#include<iostream>
#include <ostream>
#include<vector>
//all value in vector have same data types
int main(){
std::vector<int > myvect {2,9,5,4}; //declare a vector with the values


for (auto data:myvect){
    std::cout<<data<<std::endl;
    data=9;

}
// 2nd way

for (auto &data:myvect){
    std::cout<<data<<std::endl;
    data=9;
}
// this is awhat the reference does to your code.
// ################################
for (auto data:myvect){
    std::cout<<data<<std::endl;
    // data=9;

}
}
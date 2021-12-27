#include<iostream>
#include <ostream>
int main(){

    const int val {45};
    std::cout<<val<<std::endl;
    double check_val {34.78};
    int assign_val;
    #define pi 3.145678;
    // std::cout<<pi<<std::endl;
    assign_val=check_val;//this is more of typecasting
    std::cout<<"assign val from float to int "<<assign_val<<std::endl;


    // check if the value of division of int to int result in float or double
        int val1 {100},val2 {8};
        double average;
        average=val1/val2;
        std::cout<<"dividing int to int "<<average<<std::endl;

        average=static_cast<double>(val1)/val2;
        std::cout<<"solution "<<average<<std::endl;




}

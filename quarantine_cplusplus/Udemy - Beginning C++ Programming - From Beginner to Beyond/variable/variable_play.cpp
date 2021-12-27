#include <iostream>

#include<climits>
int main()
{

    bool flag {false};
    std::cout<<flag<<std::endl;

    short val=10000;
    short val2=20000;
    short product=val*val2;
    std::cout<<"char " << sizeof(char)<<" bytes " <<std::endl;
    std::cout<<"short " << sizeof(short)<<" bytes "<<std::endl;
    std::cout<<"float " << sizeof(float)<<" bytes "<<std::endl;
    std::cout<<"int " << sizeof(int)<<" bytes "<<std::endl;
    std::cout<<"double " << sizeof(double)<<" bytes "<<std::endl;
    std::cout<<"int max values is " << INT_MAX <<std::endl;
    std::cout<<"int min values is " << INT_MIN <<std::endl;
    // std::cout<<"int min values is " << FLOAT_MAX <<std::endl;
    // std::cout<<product<<std::endl;
    // std::cout<<product<<std::endl;
}
#include <iostream>

enum day {mon, tues, wed};//used in define the group within one name .its good for readablity

typedef int marks;

#define mon 0;
const int val =0;
int main()
{

    day d;
    d=wed;

    std::cout << "the value of enum is  " << d << std::endl;
    std::cout << "the value of const is  " << val << std::endl;
    // std::cout << "the value of define is  " << mon << std::endl;

    marks m1, m2;
    m1=m2=3;
    std::cout << "the value of mark in typedef is   " << m1 << "\t"<<m2 << std::endl;
    
}
#include<iostream>
#include <ostream>
#include <string>
#include <vector>
int main()
{

    int *p{nullptr};
    std::cout<<"the value of pointer is "<<p<<std::endl;
    std::cout<<"the address of pointer is "<<&p<<std::endl;
    std::cout<<"the value in stored pointer is "<<*&p<<std::endl;


    int val {20};
    int *q {&val};
    std::cout<<"the address of val  is "<<&val<<std::endl;
    std::cout<<"the value of pointer q is "<<q<<std::endl;
    std::cout<<"the address of pointer is q "<<&q<<std::endl;
    std::cout<<"the value in stored pointer  q "<<*q<<std::endl;
    *q=40;
    std::cout<<"the value of val  is "<<val<<std::endl;
// the type of the pointer is the type of the variable its initialise to . 

double myfloat {4.44}; 
double *point {&myfloat};
    std::cout<<"the address of val  is "<<&myfloat<<std::endl;
    std::cout<<"the value of pointer q is "<<point<<std::endl;
    std::cout<<"the address of pointer is q "<<&point<<std::endl;
    std::cout<<"the value in stored pointer  q "<<*point<<std::endl;
// sting pointer

std::string mystring {"mayank"};
std::string *str_pointer {&mystring};
std::cout<<"the value in stored pointer  q "<<*str_pointer<<std::endl;
// vector pointer

std::vector<std::string>myvector {"may","mishika","mybaby"};

std::vector<std::string> *vector_point {&myvector};

std::cout<<"the value in stored pointer  q "<<(*vector_point).at(0)<<std::endl;
std::cout<<"the value in stored pointer  q "<<(*vector_point)[1]<<std::endl;
for (auto runpointer:*vector_point){
    std::cout<<runpointer<<std::endl;
}
}
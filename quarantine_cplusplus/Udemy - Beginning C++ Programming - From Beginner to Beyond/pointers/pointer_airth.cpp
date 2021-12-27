#include <cstdint>
#include<iostream>
#include <iterator>

int main()
{

    int myval[]{3,5,78,6,7}; 

    int * temp_p {myval};
    std::cout<<*++temp_p<<std::endl;

    int val {89};

    const int *temp {&val};
    std::cout<<temp<<std::endl;
    temp = new int;
    delete temp;


    const int *const cont_pointer {&val};
    std::cout<<cont_pointer<<std::endl;
    cont_pointer=myval;//cannot change the const pointer pointing to conts val
}
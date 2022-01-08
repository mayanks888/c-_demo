#include <iostream>

// template is self defination of the data type for the function
template<class T>

T add ( T a , T b){
    return (a+b);
}

int main()
{
    // int add_val;
    // add_val=add(3, 4);

    std::cout<< "the value  of   of each val in mystring " << add(3,5) << std::endl;
    std::cout<< "the value  of   of each val in mystring " << add(3.4,89.6) << std::endl;
}
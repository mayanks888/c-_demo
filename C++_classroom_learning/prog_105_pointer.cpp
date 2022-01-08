#include <iostream>

int main()
{
    int val{20};
    int *mypoint;
    mypoint = &val;

    std::cout << "the address stored in pointer is    " << mypoint << std::endl;
    std::cout << "the dereferencing of pointer is    " << *mypoint<< std::endl;
    // std::cout << "the max of all element in array is   " << max_val << std::endl;
}
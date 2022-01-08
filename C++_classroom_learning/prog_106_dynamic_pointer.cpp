#include <iostream>

int main()
{
    int val{20};
    int *mypoint = new int[20];
    // this means that i have assigned dynamic memeory in arry size heap that i can
    // change anytime i want

    // now suppose i want to resize the element of the array or size
    delete[] mypoint;//delete older heap memory location

    mypoint = new int[80];
    *mypoint = 1;
    // mypoint = &val;

    std::cout << "the address stored in pointer is    " << mypoint << std::endl;
    std::cout << "the dereferencing of pointer is    " << *mypoint << std::endl;
    // std::cout << "the max of all element in array is   " << max_val << std::endl;
    delete[] mypoint;
}
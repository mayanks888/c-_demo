#include <iostream>

int main()
{
    int val[7]{20, 3, 4, 5, 7, 8, 9};
    int *mypoint;
    mypoint = val; // assign the value to array

    std::cout << "the address stored in pointer is    " << mypoint << std::endl;
    std::cout << "the dereferencing of pointer is    " << *mypoint << std::endl;

    std::cout << "the address stored in pointer is  " << ++mypoint << std::endl;
    std::cout << "the dereferencing of pointer is    " << *mypoint << std::endl; // afrer increment in above
    // std::cout << "the max of all element in array is   " << max_val << std::endl;
}
#include <iostream>

int *add(int *a)
{
    int *new_ptr = a;
    return new_ptr;
}

int *check_address(int size)
{
    int *p = new int[size];
    std::cout << "the address of heap pointer is " << p << std::endl;
    return p;
}
int main()
{
    // int add_val{4};
    // int *mypoint;
    // mypoint = add(&add_val);
    // std::cout << "the value pointer is " << *mypoint << std::endl;

    int *heappointer;
    heappointer = check_address(5);
    std::cout << "the addres of return heap pointer is " << heappointer << std::endl;
    heappointer = nullptr;
    delete[] heappointer;

    std::cout << "the addres of return heap pointer after delete is " << heappointer << std::endl;
}
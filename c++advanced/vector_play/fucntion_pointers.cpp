#include<iostream>


void test()
{
    std::cout<<"hello there"<<std::endl;

}

void val_test(int a)
{
    std:: cout<<"the values is "<<a<<std::endl;
}

int main()
{

    test();
    // defining function pointers

    void (*ptest)();
    //assinging the point to the function
    ptest=test;
    // calling function pointer
    ptest();
//    std::cout<<"function pointer calling " << ptest()<<std::endl;


//simple way to assign the function pointer is 

void (*valtest)(int)=val_test;
val_test(7);

}

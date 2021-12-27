#include<iostream>
int  add( int, double);
int  add( int);

int main()
{

    std::cout<< add( 2, 3.5)<<std::endl;
    std::cout<< add( 2)<<std::endl;
}


int  add(int a, double b)
{
    return a+b;
}

int  add( int a)
{
    return a+5;
}

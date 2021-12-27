#include<iostream>
float add_val(int , float );#this is function prototyping

int main()
{
std::cout<<add_val(2,4.5);
}

float add_val(int a, float b)
{
    return (a+b);
}
#include<iostream>


namespace mycodes
{
int add_values(int a ,int b)
{ 
    return (a+b);
}
}

int main()
{

    std::cout<<"hello world\n";
    std::cout << mycodes::add_values(6,9)<<std::endl;
    return 0;
}
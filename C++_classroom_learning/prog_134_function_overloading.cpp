#include <iostream>
#include <string>

int add(int a, int b)
{
    return (a + b);

}int add(int a, int b,int c)
{
    return (a + b+c);
}

int main()
{
    int add_val;
    add_val=add(3, 4);

    std::cout<< "the value  of   of each val in mystring " << add_val << std::endl;
    std::cout<< "the value  of   of each val in mystring " << add(3,4,5) << std::endl;
}
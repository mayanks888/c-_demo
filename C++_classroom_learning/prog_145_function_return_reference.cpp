#include <iostream>

int &fun(int &a)
{
    return a;
}
int main()
{

    int val{24};
    fun(val)=45;//here function is action as reference itself or value  of x

    std::cout << "the addres of return heap pointer after delete is " << val << std::endl;
}
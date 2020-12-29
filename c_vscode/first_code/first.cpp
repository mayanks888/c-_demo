#include<iostream>
#include"calci.h"
using namespace std;

int add_val(int a , int b)
{
    return (a+b);
}
int main()
{
    cout<<"hello world "<<endl;
    cout<<"the addition value is "<< add_val(4,5)<<endl;

    calci cl(3,5);
    int dat=cl.add_val();
    cout<<"the value of the second addition is  "<< dat<<endl;
    return 0;
}

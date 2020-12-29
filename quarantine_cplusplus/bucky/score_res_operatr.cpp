#include<iostream>
using namespace std;
//function overloading two diff function with same name
void printnumber(int a)
{
    cout<<a<<endl;
}

void printnumber(double a)
{
    cout<<a<<endl;
}

int dat=42;
int main()
{
    double dat=42.05;
    cout<<dat<<endl;
    cout<<::dat<<endl;

    printnumber(45);
    printnumber(85.2);

}


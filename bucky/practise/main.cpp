#include <iostream>
#include"test.h"
#include "learning_class.h"

//std is standard library
using namespace std;

void func_2(int a, int b ){
cout<< " sum of two number is "<< (a+b);
}
int main()
{

    A a;

    learning_class lc;
    lc.func_inside_class();

    cout <<"macros " << MACRO<<endl;
    cout << "Hello world!" << endl;
    cout<<"my first code \n";//same as endl
    int data;
    data=7;
    cout<<"the value of data is \n"<< data;
    //or
    int data2=42;
    cout<<"the value of data2 is \n"<< data2<<endl;
    cin>>data2;
    cout<<"the new value of data2 is "<< data2<<endl;

    random_func();
    func_2(data,data2);
    return 0;
}




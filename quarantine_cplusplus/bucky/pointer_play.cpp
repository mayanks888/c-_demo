#include<iostream>

using namespace std;

int main()
{

    int a[5]={1,1,1,2,2};
    cout<<a[0];
    int data=54;
    int *datapointer;
    cout<<"the memory address of data is"<<&data<<endl;
    datapointer=&data;    
    cout<<"the value of pointer is"<<*datapointer<<endl;

} 
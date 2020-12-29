
#include<iostream>
using namespace std;
int main()
{

    int a=10;
    int k=0;

    if (k==0 && a==10)
    {
        cout<<"great"<<endl;
    }

     if (k==0 || a==5)
    {
        cout<<"more"<<endl;
    }


    while (k<a)
    {
        std::cout<<k<<std::endl;
        k++;//k=k+1
        // ++k;
    }

    for (k=0;k<20;k++)
    {
        cout<<k<<endl;
    }

    
}
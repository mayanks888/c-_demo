#include<iostream>

using namespace std;

int main()
{
    int dat {5};
    double dat1[]={5.2,2.6,21,14};
    cout<<sizeof(dat1)<<endl;
    cout<<"total element present"<<sizeof(dat1)/sizeof(dat1[0])<<endl;
    if (dat>8)
    {
        cout<<"yest its greater"<<endl;
    }
    else
    {
        cout <<"not its not greater"<<endl;
    }
    

    // cout<<this->dat<<endl;

    
}

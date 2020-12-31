#include <iostream>
#include "calci.h"
using namespace std;

class may{
public:
    may(string z){
    cout<<"constructor was called"<<endl;
    cout<< "the default name was "<<z<<endl;
    }
    void string_name(){
    cout<<"function worked"<<endl;
   // cout<< "string in function name was "<< z <<endl;

    }
};

int data=76;
int main()
{
    may m("mayank");
    m.string_name();

    //////////////////////////
    calci c;

    cout << "Hello world!" << endl;
    //loops
    int loop_val=0;
    while (loop_val<5){
    cout<<"the value of loop is "<< loop_val<<endl;
    loop_val=loop_val+2;
    }
//increment operator
    int x=20;
    //this is to print the size of the variavel declaration
    cout<<"the size of int x is "<<sizeof(x)<<endl;
    cout<<++x;
////////////////////////////////////////////
//for loop
    for(int t=0;t<5;t++){
    cout<<"the value of for loop is "<<t<<endl;
    }


    //global variablea nd local variable
    int data=34;
    cout<<"value of local variable data is "<<data<<endl;
    cout<<"value of global variable data is "<<::data<<endl;

//
//array
    int arr_data[5]={1,2,3,4,5};
    cout<<"the output of array is "<< arr_data[3];

    return 0;
}

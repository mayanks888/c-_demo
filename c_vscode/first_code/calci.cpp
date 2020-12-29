#include "calci.h"
#include <iostream>

using namespace std;

calci::calci(int first_val,int second_val)//binary scope resultion operator
//this means that calci() is a function of class calci
{
    
  cout<<"first constuct created"<<endl;
    a=first_val;
    b=second_val;
}
int calci::add_val()
{
    return (a+b);

}
#include "calci.h"
#include <iostream>
#include<string>
using namespace std;

calci::calci(int passed_name)//binary scope resultion operator
//this means that calci() is a function of class calci
{
  cout<<"first constuct created"<<endl;
  name_p=passed_name;
  cout<<"first name passed "<<name_p<<endl;
  cout<<"first name passed "<<this->name_p<<endl; //printint val with different methods its means this-> direct to current object
  cout<<"first name passed "<<(*this).name_p<<endl; //printing val with another methods

}

int calci::additin(int fisrt_val, int second_val)
{
return(fisrt_val+second_val);
}
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

}

int calci::additin(int fisrt_val, int second_val)
{
return(fisrt_val+second_val);
}
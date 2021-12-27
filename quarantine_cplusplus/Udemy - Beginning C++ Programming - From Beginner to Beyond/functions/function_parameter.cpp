
#include<iostream> 
#include <iterator>

int passbyval(int ) ;
int passbyref (int &);

int main()
{
int val=34;
std::cout<<"passbyval_before"<<val<<std::endl;
passbyval( val ) ;
std::cout<<"passbyval_after"<<val<<std::endl;


std::cout<<"passbyref_before"<<val<<std::endl;
passbyref(val) ;
std::cout<<"passbyref_after"<<val<<std::endl;

}

int passbyval(int myval ) 
{
myval=50;

}

int passbyref(int &myval1 ) //this simply means that i took the memory address of the val insteal of 
// new declreaed interger with another address, and now changing the address of this.  
// so basicall pass by reference is simply the allias of the acutall pass variable addressp th
// so the question arises that why do we need pass by ref , it becuase in this way we don't use extra memory allocation 
// rather use the same location , imagine reading the long array into the function then pass by value will create
// extra memory but reference will save it

{
myval1=60;

}
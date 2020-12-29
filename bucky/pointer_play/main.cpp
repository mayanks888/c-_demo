#include <iostream>
# include "class_2.h"
#include "memberfunction.h"
using namespace std;
void passbyvalue(int x);
void passbyreference(int *x);

int main()
{
int data1=23;
int data2=44;


///////////
const int x=2;
//x=9
cout<<"value fo constant "<<x<<endl;

passbyvalue(data1);
passbyreference(&data2);
 //   cout << "Hello world!" << endl;
cout << "data1 is "<< data1<<endl;
cout << "data2 is "<< data2<<endl;


///////////////////////////////////

int mydata[5];
int *bp0=&mydata[0];
int *bp1=&mydata[1];
int *bp2=&mydata[2];
int *bp3=&mydata[3];

cout<<"bp0 is at "<<bp0<<endl;
cout<<"bp1 is at "<<bp1<<endl;
cout<<"bp2 is at "<<bp2<<endl;


//
//class play
//Declaration with class object
class_2 cl;
//Declaration with class pointers
class_2 *class_2_pointer= &cl;
//calling object
cl.printrand();
//calling pointers
class_2_pointer->printrand();

////
//calling constant function
const class_2  cont_obj;
cont_obj.const_funct();


memberfunction mf(3,86);
mf.print();
return 0;
}





void passbyvalue(int x){
x=99;
}

void passbyreference(int *x){
cout<<"the address of data2 is"<< x<<endl;
*x=66;
}

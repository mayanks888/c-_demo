#include <iostream>

using namespace std;

int main()
{
int nstudent;
//int *p_null=NULL;//declaration of null pointer
int *p_null = nullptr;//declaration of null pointer
cout<< "Enter the no of studen"<<endl;
cin>> nstudent;
//this is for declaring variable and their size dynamically
int *p= new int[nstudent] ;//declaring dynamic array
int *r=new int;// declaring dynamic variable
cout << p <<r<<endl;


//deleting dynamic array
delete [] p;
delete r;
delete p_null;
//this is another way of understanding the pointer array
//###############################################################
int myarray[4]={1,2,3,4};

cout<< "address of my array" <<myarray<<endl;
cout<< "first value of my array" <<*myarray<<endl;
cout<< "third value of my array" <<*(myarray+2)<<endl;

return 0;
}

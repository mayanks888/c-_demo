#include<iostream>

using namespace std;

void pass_by_value(int val)
{
val=22;
}

void pass_by_ref(int *point_val)

{
*point_val=85;
}
int main()
{
int yval=24;
int mypoint =42;
 
 cout<<yval<< " "<<mypoint<<endl;

 pass_by_value(yval);//passing a copy of this yval variable
 pass_by_ref(&mypoint);//passing direct address to function  
 cout<<yval<< " "<<mypoint<<endl;
}


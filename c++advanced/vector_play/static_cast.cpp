#include<iostream>
using namespace  std;


class parent{


};

class child : public parent{

};


int main()
{
float val(3.24);

cout<<static_cast<int>(val)<<endl;//static cast is similar to cast in python where  we cast from int to str or to float
//based on the concept of polymorphism let create pointer to parent class from child class

child ch;

parent *p=&ch;//using polymorph
 



 return 0;   
}
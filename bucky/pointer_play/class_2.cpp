#include "class_2.h"
#include <iostream>
using namespace std;

class_2::class_2()
{
cout<<" I am constructer"<<endl;
}

//class_2::~class_2(){
//cout<<" I am deconstructor"<<endl;
//}

//first function inside class
void class_2::printrand(){
cout<<"printing ramdom"<<endl;
}

void class_2::const_funct() const{
cout << "this was constant function"<<endl;
}

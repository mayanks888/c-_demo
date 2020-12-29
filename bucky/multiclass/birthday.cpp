#include "birthday.h"
#include <iostream>
using namespace std;
//constructer create in .h but value added here in cpp
birthday::birthday(int m, int d, int y)
{
    month=m;
    dat = d;
    year= y;

}



void birthday::printdate(){

cout<<dat<<"/"<<month<<"/"<<year<<endl;
//works on as special types of pointers
cout<<"this-> "<<this->dat<<endl;
//work on acces to dereferencing the pointer
cout<<"*this.h "<<(*this).dat<<endl;
   // cout<< dat;

    }

void birthday::printdata(){
cout<<"printing data in inference"<<endl;
}

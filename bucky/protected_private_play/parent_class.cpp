#include "parent_class.h"
#include <iostream>
#include "prot_play_class.h"

using namespace std;

//this is what you call class inheritance
parent_class::parent_class()
{
    //ctor
}

void parent_class::print_data()
{
cout<<"this is parent class"<<endl;
cout<<"protected varaiable "<<protected_val<<endl;
cout<<"private varaiable "<<private_val<<endl;

}

#include "people.h"
using namespace std;
#include <iostream>


People::People(string n, birthday bo)
//this is how you define the variable in cpp files
:name(n),dateofbirth(bo)
{
    //ctor
}

void People::printinfo(){
cout<<name <<" was born on ";
dateofbirth.printdate();
}


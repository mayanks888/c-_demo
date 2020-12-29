#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "birthday.h"
using namespace std;

class People
{
    public:
        People(string n, birthday bo);
        void printinfo();

    protected:

    private:
    //this is just declaration of the variable
   // you cannot use the direct variable from .h to cpp
    //so you need to add this variable seprately
    string name;
    birthday dateofbirth;
};

#endif // PEOPLE_H

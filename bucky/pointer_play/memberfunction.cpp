#include "memberfunction.h"
#include "class_2.h"
#include <iostream>
using namespace std;


memberfunction::memberfunction(int a, int b)
:regVar(a),constVar(b)
{
}

void memberfunction::print(){
cout<<"regvar "<<regVar<<endl;
cout<<"constvar "<<constVar<<endl;

}

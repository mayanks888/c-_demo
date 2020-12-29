#include <iostream>

using namespace std;

#include "no_one.cpp"
#include "no_two.cpp"
/*
lets start with understanding of namespace
1.Its is basically used when we have to used two differnce cpp file which might contain same variable or same function name
so for that we used namespaces so that we can use two different cpp file and call them by their namespaces
2. "Using" operarors are also used. the basic use of using is that = all the property of namespace will be available to main fucnton
example : "using namespace std" : all the function declared under the namepace std will be available to main function
*/
int main()
{
    one::display();
    two :: display();
    //cout << "Hello world!" << endl;
    return 0;
}

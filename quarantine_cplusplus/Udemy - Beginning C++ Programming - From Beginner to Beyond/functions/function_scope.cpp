#include<iostream>
#include <iterator>
#include <ostream>

void static_var()
{
    static int val {23};
    val+=1;
    std::cout<<"value of val is "<<val<<std::endl;
}


int main()
{
    int val {2};

    std::cout<<"val "<<val<<std::endl;
{ //this curly bracket creates the new scope so we can declare the same variable again and same with the global varaible
      int val {6};

    std::cout<<"val "<<val<<std::endl;
}
static_var();
static_var();
}
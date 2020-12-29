#include<iostream>

using namespace std;

// using auto in function when we are not sure about the datatypes of the arguments and status of function (return or not)

template<class t> //define template
auto test ( t val)-> decltype(val)//here we define the function with auto but we still have to define its datatypes of the agr so we took it 
// from declare type function of the val passed
{
    return val;
}

 int main()
 {
     auto value =7;//auto is similar to how we use variable in python without declaring its type and c++ will take it datatypes automatically
    //  auto unkvar;

     cout<< value<<endl;

     cout<< " the variable pass is "<<test(" mayank")<<endl;
          cout<< " the variable pass is "<<test(5)<<endl;

 }
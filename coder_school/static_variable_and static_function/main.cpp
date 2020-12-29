#include <iostream>

using namespace std;
/*we need static variable when we want to keep the same value of instance variable with all the object created from the class
static variable cannot be used inside the function of the class
static variable exist even we have not created instance of the class*/
class Static_play{
 private:
 int x=8;
 int y=5;


 public:
     static int z;
     void print_data(){
     cout<< "the value of x and y is "<<x<<endl<<y<<endl;
     //cout<< "the value of static z is "<<z<<endl;;
     }

     //here we are defining static member function
     static void memb_func(){
     cout<<"enter inside static member function"<<endl;
     }

};

//this is how we defined the static variable
 int Static_play::z=67;

int main()
{
   Static_play sp;
   sp.print_data();
   //there are two ways to define the static variable
   cout<< "the static variable is "<<sp.z<<endl;
   //or
   cout << "the static variable is "<<Static_play::z<<endl;

sp.memb_func();
//or
Static_play::memb_func();
/*static member function cannot access the
non static member variable of the class*/
}

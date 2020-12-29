//virtual fucntion is used when you have a same funtion in more class (specifically parent and child class or parent and different child classes )
// puting virtual in parent claasses will let me use the fucntion from child  classes) 
#include<iostream>
using namespace std;

class parent{
    public:
         virtual void print()
            {
                cout<<"parent"<<endl;
            }  
};
//this is inherintance
class child :public parent{
    public:
        void print()
            {
                cout<< "child"<<endl;   
            }
};


int main()
{
// this is without pointer initialisation
    child cl;
    //cl.print();
    parent &p1=cl;
    p1.print();

    ////////////////////
    // Another way to run runtime polymorphism
   parent *p2=&cl;
   p2->print();

}
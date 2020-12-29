#include <iostream>

using namespace std;
class myclass{
    private:
    int x;

public:
    myclass(int x)
    {
        this->x=x;
    }
    void display(){
        cout<<"the value of a x is "<< this->x << endl;
    }
    void operator++();
    myclass operator+(myclass c);
    //{
     //  this->x=this->x+1;
    //}
};
/*
there are two ways to declare fuction
1. define inside the class
2 define outside the class , similar to the concept of header files

both the methods are mentions here.
operator ++ is operator overloading
*/

void myclass:: operator++(){
 this->x=this->x+1;
}


myclass myclass :: operator+(myclass c){

return(this->x+c.x);
}
int main()
{

myclass mc(3);
mc.display();
++mc;
/*

here the value for variable incremented by increasing the
object
*/

mc.display();

myclass mc_2(5);

myclass mc3=mc+mc_2;
mc3.display();
    return 0;
}

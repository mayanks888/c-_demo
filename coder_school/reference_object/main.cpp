#include <iostream>

using namespace std;

class myclass{
private:

int x=9;
int y=8;

 public:
 myclass(int x,int y){
/* this was done to use same variale for instance
 and private since this-> focus on current object*/
 this->x=x;
 this->y=y;
 }


 void dispaly(){
 cout<<"the value of x is "<< x<<endl;
 cout<<"the value of y is "<< this->y<<endl;

 }
//creating the function which takes input as reference object
 void fucntion_refence(myclass &m)
 /*this &m is makeing object reference otherwise you can
 also take as direct object pass by value*/
 {
//chanfing the value of x
 m.x=m.x*m.x;

 }
};


int main()
{

myclass mc(4,5);
mc.dispaly();

/*creating reference for object now
so here m2 is just the reference of the object mc
so m2 is just alias name for mc
*/
myclass &m2=mc;
//sending object by reference
m2.fucntion_refence(m2);
m2.dispaly();
cout << "Hello world!" << endl;
mc.dispaly();
return 0;
}

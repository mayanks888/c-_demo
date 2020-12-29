#include<iostream>

using namespace std;

class animal{

    public :
    virtual void speak()=0;//this is call pure virtual function and the class that use pure virtual fucntion is called as abstract class
    virtual void run()=0;
};

class dog : public animal{
public:

 void speak()
{

    cout<<"woof woof"<<endl;
}
};
class labrador: public dog
{
    public:
        virtual void run()
        {
        cout<<"labrador running"<<endl;
        }
};

int main()
{
labrador ld;
ld.speak();
ld.run();

animal *pet=&ld;
pet->speak();
pet->run();

//you can even create the array of the class object
animal *new_pt[5];
new_pt[0]=&ld;
new_pt[0]->speak();
new_pt[0]->run();
}
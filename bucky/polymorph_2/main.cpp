#include <iostream>

using namespace std;

class enemy{

    public:
        virtual void attack(){

        }
};

class ninja: public enemy{
public:
void attack(){
cout<<"ninja power"<<endl;
}
};

class monster: public enemy{
public:
void attack(){
cout<<"monster power"<<endl;
}
};

int main()
{

ninja n;
monster m;

//enemy e
//e.setattack(23)
//great example of polymorphism

enemy *enemy1= &n;
enemy *enemy2= &m;

enemy1->attack();
enemy1->attack();

    return 0;
}

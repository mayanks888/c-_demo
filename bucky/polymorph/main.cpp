#include <iostream>

using namespace std;

class enemy{
    protected:
        int attackpower;
    public:
        void setattack(int a){
        attackpower=a;
        }
};

class ninja: public enemy{
public:
void attack(){
cout<<"ninja power !! "<< -attackpower<<endl;
}
};

class monster: public enemy{
public:
void attack(){
cout<<"monster power !! "<< -attackpower<<endl;
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

enemy1->setattack(25);
n.attack();

enemy2->setattack(50);
m.attack();
    return 0;
}

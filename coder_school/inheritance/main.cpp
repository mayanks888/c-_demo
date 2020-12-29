#include <iostream>
#include<cstring>
using namespace std;

class employee{
    protected:
        string name;

    public:
    employee(){
    }

    void setname(string name){
         this->name=name;
    }
    void display(){
        cout<<"name of employee is "<< this-> name<<endl;
    }
};

//inheritance
class new_joinee: public employee{

 private:
 string new_joinne_name;

 public:

 new_joinee(string new_joinne_name){
    this->new_joinne_name=new_joinne_name;
 }

 void display_n(){
 cout<<"name of employee from parent class "<<new_joinne_name<<endl;
}
};

int main()
{
employee e;
e.setname("mayank");
e.display();

new_joinee n("cool");

n.display();
n.display_n();
return 0;
}

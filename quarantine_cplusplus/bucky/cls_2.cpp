#include<iostream>
#include <string>
using namespace std;

class may{
    private :
        string name {"mayank"};//never declaare you name public
    public :

        int setname(string n1)
        {
            name=n1;
        }
        string  getname()
        {
            return (name);
        }
    
};

int main()
{
    may m2;
    cout<<m2.getname()<<endl;
    m2.setname("mishi");
    cout<<m2.getname()<<endl;
}
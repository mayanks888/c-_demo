#include<iostream>
#include<string>

using namespace std;
 
class may{
    public :
        may(string myname)//this is constructer  with same as class name;
        {
            name=myname;
            // setname(myname);
        }
        void setname(string n1)
        {
            name=n1;
        }
        string  getname()
        {
            return (name);
        }

        ~may()//deconstrictor
        {
            cout<<"decontruter ran"<<endl;
        }
    private :
        string name ;//never declaare you name public
    
    
};

int main()
{
    may m2("mayank");
    cout<<m2.getname()<<endl;
    m2.setname("mishi");
    cout<<m2.getname()<<endl;

    may m3("sandy");
    cout<<m3.getname()<<endl;
    m3.setname("mishi");
    cout<<m3.getname()<<endl;
}
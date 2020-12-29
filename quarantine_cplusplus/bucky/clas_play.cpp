#include<iostream>
#include<string>
using namespace std;

class firstClass{
    public:
        string name ="mayank";//do not make you variable names
       int addval(int a , int b)
    {
        int mul_val=mul(a,b);
        return (a+b+mul_val);
    }
    private:
        int mul(int k, int l)
        {
            return (k*l);
        }
    protected:
        int sub(int k, int l)
        {
            return (k-l);
        }

};

int main()
{

    firstClass fc;
    cout<<fc.name<<endl;
    cout<<fc.addval(2,4)<<endl;
    // cout<<fc.sub(5,6)<<endl;
}
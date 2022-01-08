#include <iostream>
using namespace std;
// kind of gloabal variable which can be used outside the compiler
#define x 20;
#define cin c;
// #ifndef j 30;

class constPlay
{
private:
    int a{12};
    int b{54};

public:
    void display() const
    {
        // a++; // not allout
        cout << "constan!t value is " << a << endl;
    }
};

int main()
{

    int val{30};
    const int var{45};
    const int *ptr = &val;  // pointer to the constant//  it can read data of variable but cannot change the values
    int const *ptr2 = &val; // constant pointer of type interger to the variable, it cannot point to any other address.
    // const int const *ptr3 = &val; // constant pointer of type interger to the constant variable,
    cout << "define value is " << x;
    cout << "constant value is " << var << endl;
    // cout<<"define value is "<<x<<<endl;

    constPlay cp;
    cp.display();
}

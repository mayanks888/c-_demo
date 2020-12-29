#include <iostream>

using namespace std;

template <class myset>

myset addval(myset a, myset b)
{
return (a+b);
}


int main()
{
    cout << "Hello world!" << endl;
    cout<< "the value in template function "<<addval(3.6,4.9)<<endl;
    return 0;
}

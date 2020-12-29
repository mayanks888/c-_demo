#include <iostream>

using namespace std;

int main()
{

int i=10;
/*this is really important to undertand
here &var is a reference which means that it now linked
with the same address of i meaning if i change the value of i , val will also changes

which in case of (var= i) , they both have different memory allocation
so if i changes var will remain same as previous value

2. one more concept to understand
if & is placed left of any operator "=" then it is refenrence
if & is placed right of any operator "=" then it is pointer address

*/
int &var=i;
//cout<<"mayank";
cout <<"the value of i is "<<i<<endl;
cout << "the value of var is " << var<<endl;

i=4;
var++;
//cout<<"mayank";
cout <<"the value of i is"<<i<<endl;
cout << "the value of var is " << var<<endl;
    return 0;
}

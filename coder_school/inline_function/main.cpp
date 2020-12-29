#include <iostream>

using namespace std;
//inline replace the calling function with the code inside the function
// its makes the computation faster
 inline int max(int a, int b){
return (a>b?a:b);
}
int main()
{
cout<<max(3,4)<<endl;
    cout << "Hello world!" << endl;//cout<< 3>4?3:4
    return 0;
}

#include <iostream>

using namespace std;

template <class T>

class mayank{
    T first ,second;
    public :
        mayank(T a, T b)
        {
        first= a;
        second =b;
        }
       T bigger();
};


template <class T>

T mayank<T>::bigger(){
return (first> second?first: second);
}
int main()
{
    cout << "Hello world!" << endl;

    mayank<int> m(8,4);
    cout<< m.bigger()<<endl;
    return 0;
}

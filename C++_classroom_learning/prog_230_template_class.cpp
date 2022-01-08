#include <iostream>
using namespace std;
// template is self defination of the data type for the function
template <class T>

class stack
{
private:
    int top, size;
    T *stk;

public:
    stack(int sz)
    {
        size = sz;
        stk = new T[size];
        top = -1;
    }
    ~stack()
    {
        cout << "deconstructor is called" << endl;
        delete[] stk;
    }
    void push(T);
    T pop();
};
template <class T>
void stack<T>::push(T val)
{
    if (top == size - 1)
        cout << "stack is full";
    else
        top++;
    stk[top] = val;
}
template <class T>
T stack<T>::pop()
{
    if (top == -1)
        cout << "stack is empty" << endl;
    else
    {
        int x;
        x = stk[top];
        top--;
        return x;
    }
}
// T add(T a, T b)
// {
//     return (a + b);
// }

int main()
{
    // int add_val;
    // add_val=add(3, 4);
    stack<int> s(5);
    s.push(100);
    s.push(200);
    s.push(300);
    s.pop();

    stack<float> s2(5);
    s.push(34.4);
    s.pop();

    //     std::cout << "the value  of   of each val in mystring " << add(3, 5) << std::endl;
    //     std::cout << "the value  of   of each val in mystring " << add(3.4, 89.6) << std::endl;
}
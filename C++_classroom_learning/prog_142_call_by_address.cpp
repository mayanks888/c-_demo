#include <iostream>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}


int main()
{
    int x, y;
    x = 2;
    y = 30;
    std::cout << "the value of x and y are before swaps " << x << y << std::endl;

    swap(&x, &y);
    std::cout << "the value of x and y are before swaps " << x << y << std::endl;
    // std::cout << "the value  of   of each val in mystring " << add(3, 5) << std::endl;


// cheking pass by reference
    std::cout << "the value of x and y are before swaps " << x << y << std::endl;
    swap(x, y);
    std::cout << "the value of x and y are before swaps " << x << y << std::endl;
    // std::cout << "the value  of   of each val in mystring " << add(3, 5) << std::endl;
}
#include <iostream>

int main()
{
    int my_array[]{1, 3, 5, 6, 71, 8, 9};
    int sum = 0;  
    int max_val=my_array[0]  ;
    // for (int x:my_array)
    for (auto x : my_array)
    {
        sum += x;
        if (max_val<x)
           max_val=x;
        std::cout << "the value of all element in array is   " << x << std::endl;
    }
    std::cout << "the sum of all element in array is   " << sum << std::endl;
    std::cout << "the max of all element in array is   " << max_val << std::endl;
}
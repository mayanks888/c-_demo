#include <iostream>
int main()
{

    int sum{0};
    int val{2};
    for (int loop = 0; loop <= val; loop++)
    {
        sum = sum + loop;
    }
    std::cout << "the sum of n natural number is " << sum << std::endl;
}
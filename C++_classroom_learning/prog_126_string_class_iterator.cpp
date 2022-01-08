#include <iostream>
#include <string>
int main()
{

    std::string my{"MAYANK"};

    // define iterator
    std::string::iterator it;
    for (it = my.begin(); it != my.end(); it++)
        std::cout << "the iteraro of   of mystring " << *it << std::endl;

    // second method
    for (int i = 0; my[i] != '\0'; i++)
    {
        my[i] += 32;
        std::cout << "the value  of   of each val in mystring " << my[i] << std::endl;
    }
    std::cout << "the value  of   of each val in mystring " << my << std::endl;
}
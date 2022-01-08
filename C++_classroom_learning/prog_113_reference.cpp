#include <iostream>

int main()
{
    int val{20};
    // reference is alias of the same variable , that is nickname of the same varaible
    int &ref = val;
    std::cout << "the valur stored in reference is    " << ref << std::endl;

    ref = 40;
    std::cout << "the valur stored in actual is    " << val << std::endl;
}
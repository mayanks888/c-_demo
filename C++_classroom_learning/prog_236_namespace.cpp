#include <iostream>
#include <string>

namespace First
{
    void display()
    {
        std::cout << "calling first " << std::endl;
    }
}

namespace Second
{

    void display()
    {
        std::cout << "calling second " << std::endl;
    }
}
int main()
{
    First::display();
    Second::display();
}
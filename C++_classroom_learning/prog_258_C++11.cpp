#include <iostream>
#include <string>

int main()
{
    auto val{87};
    //  add_val = add(3, 4);

    std::cout << "the  value of auto is " << val << std::endl;
    //     std::cout<< "the value  of   of each val in mystring " << add(3,4,5) << std::endl;
    // }

    // lambda function , no name directly call the
    auto x = [](int x, int y)
    { return (x + y); }(10, 5);
    std::cout << "the  value of auto is " << x << std::endl;
}
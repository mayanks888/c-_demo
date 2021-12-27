#include <iostream>
#include<cctype>
#include <string>

int main()
{


    char dat {'a'};
    std::cout<<isalpha(dat);
    std::cout<<islower(dat);

    // ###############################3
    // string
    char myname [] {"may"};
        std::cout<<myname;
            std::cout<<islower(myname[0]);

}
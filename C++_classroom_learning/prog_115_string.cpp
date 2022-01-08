#include <iostream>
#include <cstring>
int main()
{
    char mychar[]{"hello"}, mychar2[5];
    char *mypoint;
    mypoint = mychar; // mychar is just another array or character values
    std::cout << "the value of mychar    " << mychar << std::endl;
    std::cout << "the value of pointter     " << *mypoint << std::endl;
    std::cout << "the length of sting of character my is" << strlen(mychar) << std::endl;
    strcpy(mychar, mychar2);
    std::cout << "the value of mychar2    " << mychar2 << std::endl;

    std::string my{"mayank"};
    std::cout << "the value of mystring    " << my << std::endl;
}
#include <iostream>
#include <string>
int main()
{

    std::string my{"mayank"};
    std::cout << "the value of mystring    " << my << std::endl;
    std::cout << "the len of mystring    " << my.length() << std::endl;
    std::cout << "the len of mystring    " << my.size() << std::endl;
    std::cout << "the capacity of mystring    " << my.capacity() << std::endl;
    std::cout << "the maximum of mystring    " << my.max_size() << std::endl;
    std::cout << "the value of mystring    " << my.append("cool") << std::endl;
    std::cout << "the value of mystring    " << my.insert(3, "hello") << std::endl;
    my.pop_back();
    std::cout << "the pop  of mystring " << my << std::endl;
    my.push_back('h');
    std::cout << "the push  of mystring " << my << std::endl;
    //     std::cout << "the push of mystring    " << my.insert(3,"hello") << std::endl;
    //     // std::cout << "the value of mystring    " << my.insert(3,"hello") << std::endl;
}
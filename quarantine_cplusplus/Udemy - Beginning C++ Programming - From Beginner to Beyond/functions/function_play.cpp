#include <cstddef>
#include<iostream>
#include <ostream>

int main()
{
    //size_t It is a type able to represent the size of any object in bytes: size_t is the type returned by the sizeof operator and is widely used in the standard library to represent sizes and counts.

    // In <cstring>, it is used as the type of the parameter num in the functions memchr, memcmp, memcpy, memmove, memset, strncat, strncmp, strncpy and strxfrm, which in all cases it is used to specify the maximum number of bytes or characters the function has to affect.
    size_t myval {9};
    std::cout<<myval<<std::endl;

}
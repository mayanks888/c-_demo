#include <iostream>

int add(int a)
{
    static int val{23};
    val++;
    return (a+=val);
}
int main()
{
    int new_val=56;

    int (*fb)(int);//declaration funtion pointer

    fb=add;//assining function to declare function pointer
    
    // this is how u pass value to the function pointer
    std::cout << "the value of static variable is " << (*fb)(new_val) << std::endl;
    std::cout << "the value of static variable is " << (*fb)(new_val) << std::endl;
  
    // std::cout << "the value of static variable is " << add(new_val) << std::endl;
    
    
}
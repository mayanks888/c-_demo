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
  
    std::cout << "the value of static variable is " << add(new_val) << std::endl;
  
    std::cout << "the value of static variable is " << add(new_val) << std::endl;
    
    
}
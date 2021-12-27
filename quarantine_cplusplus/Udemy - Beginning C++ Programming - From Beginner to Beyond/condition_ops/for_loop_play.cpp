#include<iostream>
#include <string>
#include <vector>

int main()
{

    int dat[] {1,2,33,4,5};
    double dat2[] {1.9,2.99,3.3,4.88,2.5};

    for (int val:dat)
    {
        std::cout<<val<<std::endl;
    }
    for (int i {0}, j {4}; i<5 ;j++,i++ )
    std::cout<<i<<"  "<<j<<std::endl;



    // 3#####################################als
    // if you don't know the type of array vasls;
     for (auto val:dat2)
    {
        std::cout<<val<<std::endl;
    }

    // #############################################?
    // works with vector as well
    std::vector<double> myvect {2.3,6.7,8.75,4.55};
      for (auto val:myvect)
    {
        std::cout<<val<<std::endl;
    }

    // ##################################################
    // checking with string
    std::string mystr {"mayank"};
         for (auto val:mystr)
    {
        std::cout<<val<<std::endl;
    }
}
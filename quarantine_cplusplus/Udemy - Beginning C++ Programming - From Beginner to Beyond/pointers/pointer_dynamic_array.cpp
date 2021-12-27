#include <iostream>
#include <ostream>

int main()
{

    int *mypointer {nullptr};


    mypointer =new int; //new int is the type of the val it point to
    *mypointer = 35;
    std::cout<<*mypointer<<std::endl;

    //don't forget to deallocpate pointer
    delete mypointer;

    // dynamic array pointer

    double *my_temp_pointer {nullptr};

    my_temp_pointer= new double[8];
    std::cout<<"my temp pointer "<<my_temp_pointer<<std::endl;
    delete my_temp_pointer;
 

}
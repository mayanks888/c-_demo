#include<iostream>

int main()
{

    int myval[] {4,6,7,9,2,7};

    // int *temp_point {&myval};//this statement is wrong since the value of the myval array is a memory location
    int *temp_point {myval};
    std::cout<< "the address of array "<<myval<<std::endl;
    std::cout<< "the value of array "<<*myval<<std::endl; //deferecing the array
    std::cout<< "the value of array "<<*myval+1<<std::endl; //deferecing the array
    std::cout<< "the value of one val array "<<myval[1]<<std::endl; //deferecing the array


    std::cout<< "the address of pointer "<<temp_point<<std::endl;
    std::cout<< "the address of next avl in array pointer "<<temp_point+1<<std::endl;
    std::cout<< "the value of pointer "<<*temp_point<<std::endl; //deferecing the array
    std::cout<< "the value of pointer "<<*(temp_point+1)<<std::endl; //deferecing the array

}
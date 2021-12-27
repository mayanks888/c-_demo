#include<iostream>

int main(){
    int val = 4;
    std::cout<< val<<std::endl;

    int *mypointer=&val;
    std::cout<< mypointer<<std::endl; //this is the address of the val which got store into pointer
    std::cout<< *mypointer<<std::endl; //this it the call deferencing pointer
    // storing the adress of the pointer
    int **pointer_add=&mypointer;
    std::cout<< **pointer_add<<std::endl; //this it the call deferencing pointer
    **pointer_add=8;
        std::cout<< "after changing the values "<<val<<std::endl;



}

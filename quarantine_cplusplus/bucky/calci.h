#ifndef CALCI_H
#define CALCI_H
#include<iostream>
#include<string>
class calci
{
    public:
        calci(int myname);
        int additin(int a , int b);

        private:
            int name_p;

};


int main()
{

    calci c1(5);
    std::cout<<c1.additin(5,4)<<std::endl;
//by help of pointer

    calci *cl_point=&c1;
    cl_point->additin(6,8);
    std::cout<<cl_point->additin(8,4)<<std::endl;

}
#endif // CALCI_H

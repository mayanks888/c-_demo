#include<iostream>
#include <ostream>


float add_val(int , float );//this is function prototyping
int disp_array(int array[]);

int find_all_array(int marray[],int size)
{
    for(int c{0};c<size;c++)

    std::cout<<marray[c]<<std::endl;
marray[2]=45;
}


int main()
{
std::cout<<add_val(2,4.5);

int myarray []{1,3,4,5,6};

for (int val:myarray)
{
    std::cout<<val<<std::endl;
}
disp_array(myarray);//array to pass to funstion always pass its address not values
find_all_array(myarray,5);//array to pass to funstion always pass its address not values
//if you checnge the value of array in fucntion then the actual value of the array will also be changed.
for (int val:myarray)
{
    std::cout<<"after value changes"<<val<<std::endl;
}
}

float add_val(int a, float b)
{
    return (a+b);
}

int disp_array(int marray[])
{
std::cout<<marray<<std::endl;//showing address of array
std::cout<<marray[1]<<std::endl; //showing the value of array
}
// }
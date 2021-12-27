
#include<iostream>
#include <ostream>
#include <string>
#include <vector>

class first_class     {
    public:
    
        int basic_val;
        std::string name;
    
     void print_val()
     {
         std::cout<<"the value of the basic in "<<basic_val<<std::endl;
     }

};

int main()
{

    first_class fc,fc2;
    fc.basic_val=34;
    fc.print_val();
//array class

first_class  fc_array [] {fc, fc2};
//vector class
std::vector<first_class> myvect {fc,fc2};

// dynamic class 
    first_class *class_pointer = new first_class;


    (*class_pointer).basic_val=56;
    (*class_pointer).print_val();
        
        // or 

    class_pointer->basic_val=45;
    class_pointer->print_val();


    delete class_pointer;
}
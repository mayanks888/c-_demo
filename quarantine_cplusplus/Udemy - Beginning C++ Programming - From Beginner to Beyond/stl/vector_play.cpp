#include<iostream>
#include<vector>
//all value in vector have same data types
int main(){
std::vector<int > myvect {2,9,5,4}; //declare a vector with the values
std::vector<int > myvect2 (6); //declare a vector of size 6
std::vector<int > myvect3  (15,8); //declare vector of size 15 with all value 
// set to 8
//  std::cout<<myvect<<std::endl;
    std::cout<<"myvect2 " << myvect2[1]<<std::endl;
    std::cout<<"myvect2 " << myvect[1]<<std::endl;
    std::cout<<"myvect3 " << myvect3[2]<<std::endl;
    std::cout<<"myvect3 " << myvect3.at(3)<<std::endl; 
    myvect3.push_back(76); //adding values to defines vectors
    std::cout<<"myvect3 " << myvect3.at(15)<<std::endl; //another way.
    std::cout<<"size of  " <<myvect3.size()<<std::endl; 
    
    
    for(auto i=myvect.begin(); i<myvect.end(); i++)
    {
        std::cout<<" "<<*i;
    }




}
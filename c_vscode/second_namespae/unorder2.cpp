// C++ program to illustrate  
// std :: unordered_map :: at() 
#include<iostream>  
#include<string> 
#include<unordered_map> 
  
using namespace std; 
  
int main() 
{ 
    unordered_map<string,int> mp = { 
                            {"first",1}, 
                            {"second",2}, 
                            {"third",3}, 
                            {"fourth",4} 
    }; 
                                      
    // returns the reference i.e. the mapped 
    // value with the key 'second' 
    cout<<"Value of key mp['second'] = " << mp.at("second")<<endl; 
      
    try 
    { 
        mp.at("third"); 
    }  
  
    catch(const out_of_range &e) 
    { 
        cerr << "Exception at " << e.what() << endl; 
    }  
      
      
    return 0; 
} 
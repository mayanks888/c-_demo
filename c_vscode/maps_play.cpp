// C++ program to illustrate  
// std :: unordered_map :: at() 
#include<unordered_map>
#include <map>
#include<iostream>

int main(){

enum X
{
   A,
   B,
   C
    };

enum TlColor {
  GREEN = 0,
  YELLOW = 1,
  RED = 2,
  BLACK = 3,
  UNKNOWN_COLOR=4

    };

// std::map<std::string, X> xmap = boost::map_list_of("A", A)("B", B)("C",C);


std::map<std::string , TlColor> myclo;
// TlColor tl;
// std::cout<<tl.GREEN;

std::map<TlColor, std::string> kColorStr = {{UNKNOWN_COLOR, "unknown"},
                                              {RED, "red"},
                                              {GREEN, "green"},
                                              {YELLOW, "yellow"},
                                              {BLACK, "black"}};


std::map< std::string,TlColor> kColorStr2 = {{ "unknown",UNKNOWN_COLOR},
                                              {"red",RED}};
std::cout<<kColorStr[RED]<<std::endl;
// std::cout<<kColorStr2['2']<<std::endl;
}
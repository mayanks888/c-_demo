#include<unordered_map>

#include<iostream>
using namespace std;
int main(){

enum TlColor {
  GREEN = 0,
  YELLOW = 1,
  RED = 2,
  BLACK = 3,
  UNKNOWN_COLOR=4
};
std::unordered_map<std::string, TlColor> color_map_;
std::unordered_map<std::string, double> time_map_;

color_map_["1"]=GREEN;

time_map_["1"]=2454545454;

unordered_map<int,int>mp;
unordered_map<string, int> maya;
  mp[5]=12;
  mp[4]=14;
//   std::cout
std::cout<<mp[5]<<' '<<mp[4]<<endl;//prints: 12 14
maya["1"] = 2;
cout<<maya["1"]<<endl;



unordered_map<string, int> umap; 
  
    // inserting values by using [] operator 
    umap["GeeksforGeeks"] = 10; 
    umap["Practice"] = 20; 
    umap["Contribute"] = 30; 
    umap["Practice"] = 50; 
    umap["Practice"] = 60; 
    umap["Practice"] = 80; 
    umap["Practice"] = 90; 
  
  cout<<"upap size "<<umap.size()<<endl;
    // Traversing an unordered map 
    for (auto x : umap) 
      cout << x.first << " " << x.second << endl; 
    // cout<<"my val"<< umap.find("Contribute")<<endl;

//   color_map_["cool"];
}

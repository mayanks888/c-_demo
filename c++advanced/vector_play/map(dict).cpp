//maps is similar to  
#include <iostream>
#include<map>
using namespace std;

int main()
{

    map<string, int>val;

    val["may"]=40;
    val["raj"]=30;

      for( map<string,int>::iterator it =val.begin(); it !=val.end();it++)
    {
        // it+=1;
        cout <<it->first<<"\t"<<it->second<<endl;
    }
    return 0;
}
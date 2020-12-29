// ambiguity will exist if two class a fucntion with the same name as we try to call them from thier name 
#include<iostream>
using namespace std;

class youtuber{
    public:
    void work()
    {
        cout<<"working as youtuber"<<endl;

    }
};
class engineer {

    public :
    void work()
    {

        cout<<"working as engineer"<<endl;
    }
};
class spyguy:public youtuber,public engineer{

};

int main()
{

spyguy sp;
// sp.work();//work fcuntion is present in both the class 

// solution
// 1 :using scope resoution operator
sp.engineer::work();
sp.youtuber::work();

//2 nd taking reference of class

engineer e= sp;
youtuber y=sp;
e.work();
y.work();

// 3 and typecast

static_cast<engineer>(sp).work();
static_cast<youtuber>(sp).work();
return 0;
}
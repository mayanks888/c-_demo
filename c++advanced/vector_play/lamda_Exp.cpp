// lambda is single line fucntion
#include<iostream>
using namespace std;

void test(void (*pfunc)())
{
pfunc();
}


void testgret(void(*greet)(string ))
{
    greet("cool");


}



int main()
{
auto func=[](){cout<< "hello"<<endl;};
[](){cout<< "hello with adding"<<endl;}();//calling lambda fucntion directly by adding () at the end

func();
test(func);//pasing to pointer function

/////////////////////////////////////////////////////


auto pgreet=[](string name){cout<<"hello "<<name<<endl;};

pgreet("mayank");

testgret(pgreet);


    //################################################################
// using local variable in  lambda fucntion


int a=1;
int b=2;
int c=3;

//capture a and b by value
[a,b](){cout<<"value of local variavle is "<< a<<"\t"<< b<<endl;}();
// capture all variable by value
[=](){cout<<"value of local variavle is "<< a<<"\t"<< b<<"\t"<< c<<endl;}();
//capture local variable by reference
[&a](){cout<<"value of local variavle is "<< a<<endl;}();

    return 0;

}
#include<iostream>
#include<stack>
#include<queue>

class mytest{
 private:
    std::string name;
public:
    mytest(std::string myname):name(myname)
        {



    }
    // this is decontructor
    ~mytest()
    {


    }
    void print()
    {
        std::cout<<"the name is "<<name<<std::endl;

    }
};

 main()
{

    mytest mt("mayank");
    mt.print();
    // creating stack
    // stack<mytest> mystack;
    std::stack<mytest> mystack;

    mystack.push(mytest("mishika"));
    mystack.push(mytest("mayank"));
    mystack.push(mytest("sandy"));


    // mystack.pop();//remove the top of the stack
    mytest t1=mystack.top();//extract the top of the stack 

    // mytest t1=mystack.pop();
    t1.print();

    while(mystack.size()>0)
{
    mytest test =mystack.top();
    test.print();
    mystack.pop();
}
}
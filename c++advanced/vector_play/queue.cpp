
#include<iostream>
#include<stack>
#include<queue>

using namespace std;

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
    // creating queue
    // queue<mytest> myqueue;
    std::queue<mytest> myqueue;

    myqueue.push(mytest("mishika"));
    myqueue.push(mytest("mayank"));
    myqueue.push(mytest("sandy"));


    // myqueue.pop();//remove the top of the queue
    mytest t1=myqueue.front();//extract the top of the queue 

    // mytest t1=myqueue.pop();
    t1.print();

    while(myqueue.size()>0)
{
    mytest test =myqueue.front();

    // for(auto x : myqueue)
    // {
    //    cout<< x->print()<<endl;
    // }

    // cout<<myqueue[1]->
    
    // myqueue.front();
    std::cout<<"size is " << myqueue.size()<<std::endl;
    test.print();
    myqueue.pop();
}
} 
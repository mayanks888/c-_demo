//so mutex is used for racing condition when both the function try to change the value of the variable at the same time
#include<iostream>
#include<thread>
#include< >

using namespace std;
 
 int myamt=0;
mutex m;
 void money()
 {
    //  m.lock();//lock is used to remove race condition 
     //or
     m.try_lock();
     ++myamt;
    m.unlock();//unblock mutex
 }

 int main()
 {

     thread t1(money);
     thread t2(money);

    t1.join();
    t2.join();
    cout<<"total money "<< myamt<<std::endl;
 }
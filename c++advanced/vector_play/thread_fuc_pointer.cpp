#include<iostream>
#include<thread>
#include <chrono>
using namespace std;
using namespace std::chrono;
typedef unsigned long long high_Cal;

high_Cal oddsum=0;
high_Cal evensum=0;

void findeven(high_Cal par_str,high_Cal par_end){


    for (int i=par_str;i< par_end;i++)
    {
        if ((i&1)==0)
        {
            evensum+=1;
        }
    }
}

void findodd(high_Cal par_str,high_Cal par_end){


    for (int i=par_str;i< par_end;i++)
    {
        if ((i&1)==1)
        {
           oddsum+=1;
        }
    }
}

int main()
{
high_Cal    str_val=0;
high_Cal str_end=19200;


auto start = std::chrono::high_resolution_clock::now();



//creating a thread two create parallel computing
thread t1(findeven,str_val,str_end); //firt functon and then parameteras
thread t2(findodd,str_val,str_end);

t1.join();
if (t1.joinable());
{
    t2.join();
}
// t2.join();

// findeven(str_val,str_end);
// findodd(str_val,str_end);

cout<<"odd sum "<<oddsum<<endl;
cout<<"Even sum "<<evensum<<endl;
auto end = std::chrono::high_resolution_clock::now();
std::chrono::duration<double> diff = end-start;
std::cout << "Time to  iterate  " << str_end << " ints : " << diff.count() << " s\n";

return 0;

}
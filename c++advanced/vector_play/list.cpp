
#include <iostream>
#include<list>
using namespace std;

int main()
{

    int val=88;
    list<int> numbers;
    //adding value to vector of string
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(7);


    list<int>::iterator it =numbers.begin();
    cout<<"the actual value of iterator is" << *it<<endl;
    it++;
    numbers.insert(it,89);
    for( list<int>::iterator it =numbers.begin(); it !=numbers.end();it++)
    {
        // it+=1;
        cout <<*it<<endl;
    }


    cout<<"hello world"<<endl;
    return 0;
}

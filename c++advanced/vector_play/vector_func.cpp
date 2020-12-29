
//vector is used to store the list of arary and its verY useful in C++ working of vector is explain below;
// the main use of vector is size of vector can be dynamic and can be change anytime'
//in sime termes vector is similar to list in python
#include <iostream>
#include<vector>
using namespace std;

int main()
{


    cout << "Hello world!" << endl;
    //define vector of string
    vector<string>str(5);
    str={"new", "types","added"};//this is a current adcanced method of assigning data to the vector
    //adding value to vector of string
    str.push_back("one");
    str.push_back("two");
    str.push_back("three");
    str.push_back("four");
   // str[3]="mayank";
    //this is a method to read the data from vector
   for (int i=0 ; i< str.size();i++)
   {
   cout<<"this is a result from for loop "<<str[i]<<endl;
   }


    // this is the better method of reading the value of the vector  using iterator
    vector<string>::iterator it =str.begin(); // syntax work like intiliase the vector to the begining address of the vector
    it++;
    cout <<*it<<endl;

    cout<< "this is result from another method" <<endl;
    // reading all the value of the vector using iterator and for loop
    for( vector<string>::iterator it =str.begin(); it !=str.end();it++)
    {
        // it+=1;
        cout <<*it<<endl;
    }


    //////////////////////////////another vector fucntion////////////////////////////////
    // this is for vector vs memory

    vector<double>number(1);

    cout<<"size of vector number is "<<number.size() <<std::endl;

    int capacity= number.capacity();
    cout<<"capacity/size of vector is "<< number.capacity()<<std::endl;

    for (int a=0 ;a<10000;a++)
    {

        if (number.capacity()!=capacity)
        {
            capacity=number.capacity();
            std::cout<<"increased capacity"<<capacity<<std::endl;
        }
        number.push_back(a);
        // std::cout<<number[a]<<endl;
    }

    return 0;
}
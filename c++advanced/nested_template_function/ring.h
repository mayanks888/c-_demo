#ifndef RING_H
#define RING_H
#include <iostream>

using namespace std;


class bing
{
    public:
        class myiterator;//this is class in class concepts

    protected:

    private:
};

class bing::myiterator{
public:
void print();

};
//this is one of the best example in understanding the scope resolution operator (::) 
// void bing:: myiterator::print()//this work likes inside class bing then inside class myiterator look for function print () which is declared either in ring.h or ring.h or ring.cpp
// {
// cout<<"hello from itretor"<<endl;
//  }



#endif // RING_H

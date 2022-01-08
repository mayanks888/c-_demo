#include <iostream>

class rectangle
{
private:
    int length;
    int breadth;
public:
    void set_dimem(int l, int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return (length * breadth);
    }

    int perimeter()
    {
        return (2 * (length + breadth));
    }
};

int main()
{

    rectangle r1; // stack memory object create
    rectangle *p1;
    p1 = &r1; // here object created in stack of memory location
    // p2 = &rectangle();//may bne another way to declaring object pointer but now working as of now
    // -> is deferencing operator
    p1->set_dimem(2,3);
    std::cout << "value of the area is " << p1->area() << std::endl;
    std::cout << "value of the area is " << p1->perimeter() << std::endl;
// _________________________________________________
    // now create object in heap of the memoery that is dynamic object pointer
    rectangle *p2 = new rectangle(); // object is created in the heap of the memory location
    p2->set_dimem(5,8);
    std::cout << "value of the area is " << p2->area() << std::endl;
    std::cout << "value of the area is " << p2->perimeter() << std::endl;
    delete p2;
    p2 = NULL;
}   
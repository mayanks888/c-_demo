#include <iostream>

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) // constructor
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return (length * breadth);
    }

    int perimeter();
};
/*
// declare outside the class and this is consider as a good practise since 
then this will create seprate binary file for perimeter member function and also 
data encapsulation can happened if i used header file here
also if u place function inside class they become inline function which is bad
if u used complex function
s*/
int Rectangle::perimeter()
{
    return (2 * (length + breadth));
}
int main()
{

    Rectangle r1(2, 4);
    std::cout << "value of the area is " << r1.area() << std::endl;
    std::cout << "value of the area is " << r1.perimeter() << std::endl;
}
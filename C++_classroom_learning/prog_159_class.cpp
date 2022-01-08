#include <iostream>

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)//constructor
    {
        length = l;
        breadth = b;
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

    Rectangle r1(2, 4);
    std::cout << "value of the area is " << r1.area() << std::endl;
    std::cout << "value of the area is " << r1.perimeter() << std::endl;
}
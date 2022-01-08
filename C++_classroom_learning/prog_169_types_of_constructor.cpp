#include <iostream>

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 1, int b = 1) // constructor
    {
        length = l;
        breadth = b;
    }

    // copy constructor
    Rectangle(Rectangle &k) // constructor
    {
        length = k.length;
        breadth = k.breadth;
        std::cout<<"copy constructor was called"<<std::endl;
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

    Rectangle r1(2, 4), r2(2), r3;
    std::cout << "value of the area is " << r1.area() << std::endl;
    std::cout << "value of the area is " << r1.perimeter() << std::endl;
    std::cout << "value of the area is " << r2.area() << std::endl;
    std::cout << "value of the area is " << r2.perimeter() << std::endl;
    std::cout << "value of the area is " << r3.area() << std::endl;
    std::cout << "value of the area is " << r3.perimeter() << std::endl;

    // copy constructor

    Rectangle r4(r1);
    std::cout << "value of the area is " << r4.area() << std::endl;
    std::cout << "value of the area is " << r4.perimeter() << std::endl;
}
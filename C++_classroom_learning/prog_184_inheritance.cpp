#include <iostream>

class Rectangle
{
protected:
    int length;
    int breadth;

public:
    Rectangle(int l=0, int b=0) // constructor
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
    void display()
    {
        std::cout << "the value of length  is " << length <<" and breadth is "<<breadth << std::endl;
    }


};

class derived : public Rectangle
{
    public:
    void set_value(int  a , int b)
    {
        length=a;
        breadth=b;
    }
};

int main()
{

    Rectangle r1(2, 4);
    std::cout << "value of the area is " << r1.area() << std::endl;
    std::cout << "value of the area is " << r1.perimeter() << std::endl;

    derived d1;
    d1.set_value(5,8);
    d1.display();

    
}
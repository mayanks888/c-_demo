#include <iostream>

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int lenght = 0, int imaginary = 0) // constructor
    {
        // this means point to the same object i.e pointer to the object inside class
        // useful when  i have the same arguments name as private data members
        this->real = lenght;
        this->imaginary = imaginary;
    }

    void get_values()
    {
        std::cout << "the summation of two complex number is  " << real << "i+" << imaginary << std::endl;
    }

    Complex operator+(Complex cx) // this is how u used operator overloading
    {
        Complex temp;
        temp.real = cx.real + real;
        temp.imaginary = cx.imaginary + imaginary;
        return temp;
    }

    Complex operator-(Complex cx) // this is how u used operator overloading
    {
        Complex temp;
        temp.real = cx.real - real;
        temp.imaginary = cx.imaginary - imaginary;
        return temp;
    }
};
int main()
{

    Complex c1(2, 4), c2(5, 7), c3;
    c3 = c1 + c2;
    c3.get_values();

    c3 = c2 - c1;
    c3.get_values();
    // std::cout << "the summation of two complex number is " << c3.get_values() << std::endl;
    // std::cout << "value of the perimeter is " << r1.perimeter() << std::endl;
}
#include<iostream>

using namespace std;
class point{
    int x;
    int y;
    public:
        point(int new_x=0,int new_y=0):x(new_x), y(new_y){}
        //now intriducing operator overloading
        point operator + (const point& rhs){
            point pt;
            pt.x=x+rhs.x;
            pt.y=y+rhs.y;
            return pt;
        }
//other way of operator overloading
         point add_val(const point& rhs){
            point pt;
            pt.x=x+rhs.x;
            pt.y=y+rhs.y;
            return pt;

        }
    void printcal()
    {
        cout<<"x : "<< x<<" y : "<< y<<endl;
    }
};

int main()
{
point p1(1,3);
point p2(3,4);
// point p1(3,4),p2(6,7);//declare two object at same time 
point p5=p1.add_val(p2);
p5.printcal();

point p3=p1+p2;
p3.printcal();
    return 0;
    }
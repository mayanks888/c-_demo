#include <iostream>
using namespace std;

/*program for demo#1-base class pointer derived class object

*/
class base
{
public:
	//  virtual void display()//use this if you want to make function overiding in pointer condition
	 void display()
	{
		cout << "display of base" << endl;
	}
};
class derived : public base
{
public:
// #function overiding
	void display()
	{
		cout << "display of derived" << endl;
	}
};
int main()
{
	derived d;
	d.display();

	// fucntion overiding does not work with pointer which is create from base class
	// derived d;
	// derived *ptr = &d;
	base *ptr = &d;
	ptr->display();
	return 0;
}
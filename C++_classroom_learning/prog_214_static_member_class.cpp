#include <iostream>
using namespace std;

class myclass
{
private:
	int a, b;

public:
	// common value shared by all the object of the class
	static int static_count;
	myclass()
	{
		static_count++;
	}

	static void static_member_func()
	{
		std::cout << "static variable call " << static_count << std::endl;
	}
};
// define static memer function outside the class as well
int myclass::static_count{0};
int main()
{
	myclass m1;
	std::cout << "the value of the static count value is " << m1.static_count << std::endl;
	myclass m2;
	std::cout << "the value of the static count value is " << m2.static_count << std::endl;
	// another way to call static member function
	std::cout << "the value of the static count value is " << myclass::static_count << std::endl;

	// calling static  member function 
	m2.static_member_func();
	myclass::static_member_func();
	return 0;
}
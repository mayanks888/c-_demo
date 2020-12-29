
#include <iostream>
#include <string>
using namespace std;

template<class T>
void print(T n) {
	cout << n << endl;
}

int main() {
	print<string>("Hello");//one way to declare the template
	print<int>(5);

	print("Hi there");
    print(6.6654);

	return 0;
}

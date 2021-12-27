#include "test_class.h"
#include <iostream>
#include <iterator>

int dummy_class::num_of_createe_obj{0};
dummy_class::dummy_class() {
  std::cout << "this is constrcture" << std::endl;
  ++num_of_createe_obj;
}

dummy_class::dummy_class(int val, int val2) : a{val}, b{val2} {
  ++num_of_createe_obj;
} // constructor initialising liss.

void dummy_class::display() {
  std::cout << "the value of a , b " << a << "\t" << b << std::endl;
}
void dummy_class::setval(int k, int j) {
  a = k;
  b = j;
}

dummy_class::~dummy_class() { --num_of_createe_obj; 
  std::cout << "deconstructor called" << std::endl;

}

int dummy_class::count_obk() { return num_of_createe_obj; }

int main() {

  dummy_class dc;
  dc.setval(45, 26);
  dc.display();

  dummy_class dc2(56, 78);
  dc2.display();
  std::cout << "no of obj created" << dc2.count_obk() << std::endl;

    dummy_class dc3(56, 78);
  dc3.display();
  std::cout << "no of obj created" << dc2.count_obk() << std::endl;
}
#ifndef DUMMY
#define DUMMY
#include <iostream>

class dummy_class {

private:
  int a, b;
  static int num_of_createe_obj;

public:
  dummy_class();
  dummy_class(int, int);
  void display();
  void setval(int, int);

  static int count_obk();
    ~dummy_class();
};

#endif // DUMMY

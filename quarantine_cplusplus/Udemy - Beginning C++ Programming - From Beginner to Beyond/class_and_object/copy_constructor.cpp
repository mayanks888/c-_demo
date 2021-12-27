#include <cstdlib>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>

class dummy_class_2 {
private:
  int val;
  int totol;
  std::string name;

public:
  dummy_class_2(int myval =5, int mytotal=0, std::string myname="none" );
//   dummy_class_2(int, int, std::string);

  void display();

  dummy_class_2(const dummy_class_2 &souce);

  ~dummy_class_2()
  {std::cout<<"deconstrucotr called"<<std::endl;
  }
};

// dummy_class_2::dummy_class_2(int myval = 0, int mytotal = 0, std::string myname = "none")
dummy_class_2::dummy_class_2(int myval, int mytotal, std::string myname )
    : val{myval}, totol{mytotal}, name{myname} {

  std::cout << "my default constructor" << std::endl;
}

dummy_class_2::dummy_class_2(const dummy_class_2 &source)
 : val{source.val}, totol{source.totol}, name{source.name}{  
   std::cout << "my copy constructor" << std::endl;
}

void dummy_class_2::display()
{
    std::cout<<"the value of val is "<<val<<std::endl;
    std::cout<<"the value of total is "<<totol<<std::endl;
    std::cout<<"the value of name is "<<name<<std::endl;
}



void copyconsturc_display(dummy_class_2 d){

      d.display();

}
int main() {

  dummy_class_2 dc;
//   dc.display();

 dummy_class_2 dc2{54,76, "mayank"};
//   dc2.display();

   dummy_class_2 dc3{96,87};
//   dc3.display();

  //copy constructor

  copyconsturc_display(dc);
  // copyconsturc_display(dc);
}
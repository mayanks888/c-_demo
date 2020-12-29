#include <iostream>

using namespace std;

struct address{
int house_no   ;
char street_name;
};

struct student{
int rollno;
char  section;
address adr;
};

int main()
{
student may;
may.adr.house_no = 21;
may.adr.street_name ='k';
may.rollno = 45;
may.section ='b';

//##############3333
//pointer

student *mayptr;
mayptr=&may;

cout<<"house no is "<<mayptr->adr.house_no<<endl;
cout<<"street no is "<<mayptr->adr.street_name<<endl;
    return 0;
}

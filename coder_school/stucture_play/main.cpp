#include <iostream>

using namespace std;
//this is how you define structure, the basic use is all multiple datatypes in  together

struct student{
int rollno;
char  section;
};

void struc_func(student s);//this is known as function prototyping
void struc_func_pointer(student *s_pointer);


int main()
{
//using pointer
student mayank;
mayank.rollno=11;
mayank.section='b';
cout<<mayank.section<<endl;
cout<<mayank.rollno<<endl;

//using pointer
student *mayptr;
mayptr = &mayank;
cout<<mayptr->rollno<<endl;
cout<<mayptr->section<<endl;

//########################################3
//declaration of new structure instance
struc_func(mayank);
struc_func_pointer(&mayank);
    return 0;
}

void struc_func(student s){

cout<< "rollno is "<<s.rollno<<endl;
cout<< "section is "<<s.section<<endl;
}


void struc_func_pointer(student *s_pointer){

cout<< "rollno is "<<s_pointer->rollno<<endl;
cout<< "section is "<<s_pointer->section<<endl;
}

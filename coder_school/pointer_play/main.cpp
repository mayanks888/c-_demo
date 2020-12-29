 #include <iostream>

using namespace std;

class box{
    private:
        int length;
        int width;
        int height;
        int vol;

    public:
     box(int l, int w, int h){
         length=l;
         width=w;
         height=h;
         }
    //this is constructor overloading
    box(){
         length=2;
         width=3;
         height=4;
         }

    void cal_volume(){
        vol=length*width*height;
        cout<<"the volume of the box is "<<vol<<endl;
    }

};


int main()
{
box b(2,3,6);
//this is object function
b.cal_volume();

//now we will try to create the instance of the class with pointer
//this is known as object pointer
//initialise pointer
// * = declare pointer and & point to the adress of the pointer
box *point_instance;
point_instance=&b;
cout<< "the addres of the pointer is "<<point_instance<< endl;
/*this is how we called the member function with pointer
we use the arrow operator to access the instance variale
and function of the class through object pointers\*/
point_instance->cal_volume();
cout<< "the addres of the pointer is 2"<<point_instance<< endl;
//cout<<point_instance->height<<endl;


//intoducing the dynamic function and variable generation technique here

box *dynamic_decl;
dynamic_decl=new box(2,2,3);
dynamic_decl->cal_volume();
//deleting dynamic memory allocation
delete dynamic_decl;
//multiple object instance
box *dynamic_decl_2;
// here we have created 3 object instance of class box
dynamic_decl_2=new box[3];
dynamic_decl_2[0].cal_volume();
dynamic_decl_2[1].cal_volume();
dynamic_decl_2[2].cal_volume();
delete [] dynamic_decl_2;
    return 0;
}

#include <iostream>

using namespace std;

class Myclass{
    private :
        int x;
    public:
    int y;
    /*Myclass(int x){
    this->x=x;
    }*/
     void normal_func(){
        cout<<"this is not the friend function"<<endl;
    }
    friend void friend_func();
    friend void friend_func_with_class_obj();
};

void friend_func(){
cout<<"this is friend function"<<endl;
}

void friend_func_with_class_obj(Myclass m2){
cout<< "the value of y is "<< m2.y<<endl;
}


int main()
{

Myclass mc;
mc.normal_func();
friend_func();

friend_func_with_class_obj(mc);
    cout << "Hello world!" << endl;
    string name="mayank";
    cout<<"name is "<< name<<endl;
    return 0;
}

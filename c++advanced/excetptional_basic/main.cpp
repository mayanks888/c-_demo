#include <iostream>

using namespace std;

void mightgowrong(){
    bool error =false;
    bool error2=true;
    if (error){
        //throw 8;
        throw 8;
    }
    if (error2){
        //throw 8;
        throw "error found";
    }
}

int main()
{
    cout << "Hello world!" << endl;
    try{
        mightgowrong();

    }
    catch(int e ){

        cout << "error code is "<< e<< endl;

    }
    cout<<"still runnig"<<endl;
    return 0;
}

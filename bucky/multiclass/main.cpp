#include <iostream>
#include "people.h"
#include "birthday.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    birthday bd(2,3,2019);
    bd.printdate();


    /////////people class
    People pl("mishi",bd);
    pl.printinfo();


    //////////////////////////
    //inheritence
   // daughhter dt;
   // dt.printdata();

        return 0;
}

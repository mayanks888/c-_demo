#include <iostream>
#include "prot_play_class.h"
#include "parent_class.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    parent_class pc;
    pc.print_data();

    prot_play_class pp;
    pp.print_data();
    return 0;
}

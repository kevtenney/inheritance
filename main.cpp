#include <iostream>
#include "Counter.h"

using namespace std;

int main()
{
    Counter c1; //shortcut is alt + enter to include it after you type it.
    Counter c2(99);
    CountDn c3;
    CountDn c4(50);
    cout<<"C1 count is: "<<c1.getCount()<<endl;
    ++c2;
    cout<<"C2 Count is: "<<c2.getCount()<<endl;

    ++c3;
    ++c3;
    --c3;
    cout<<"C3 Count is: "<<c3.getCount()<<endl;
    return 0;
}
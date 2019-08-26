#include <iostream>

using namespace std;

int main()
{
    int sch, apl, ost, ostsch;
    cin>> sch >> apl;
    ost = apl % sch;
    ostsch = (sch - ost)%sch;
    cout<< ostsch;
    return 0;
}

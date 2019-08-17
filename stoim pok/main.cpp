#include <iostream>

using namespace std;

int main()
{
    int stkop, strub, kop, rub, kol, promkop, promrub;
    cin>> strub >> stkop >> kol;
    promkop = stkop * kol;
    promrub = strub * kol;
    kop = promkop%100;
    rub = promrub + promkop/100;
    cout<< rub << " " << kop;
    return 0;
}

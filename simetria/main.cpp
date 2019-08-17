#include <iostream>

using namespace std;

int main()
{
    int  x, x1, x2, x3, x4, x5, x6, x7;
    cin>> x;
    x1 = x%10;
    x2 = (x/10)%10;
    x3 = (x/100)%10;
    x4 = x/1000;
    x5 = abs(x4 - x1);
    x6 = abs(x3 - x2);
    x7 = 1 + x5 + x6;
    cout<< x7;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, x, y, z;
    cin>> a >> b >> c;
    x = a % 2;
    y = b % 2;
    z = c % 2;
    d = a / 2 + 1 + ((x-1)/(x+1));
    e = b / 2 + 1 + ((y-1)/(y+1));
    f = c / 2 + 1 + ((z-1)/(z+1));
    cout<< d + e + f;
    return 0;
}

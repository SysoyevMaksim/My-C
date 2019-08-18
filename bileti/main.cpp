#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, d, x, y, z;
    cin>> n;
    a = n / 60;
    b = n % 60;
    c = b / 10;
    d = b % 10;
    if (d * 15 < 125)
    {
        x = d;
        y = c;
    }
    else
    {
        x = 0;
        y = c + 1;
    }
    if(y * 125 < 440)
    {
        y = y;
        z = a;
    }
    else
    {
        y = 0;
        z = a + 1;
    }
    cout<< x << " " << y << " " << z;
    return 0;
}

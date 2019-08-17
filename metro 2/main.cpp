#include <iostream>

using namespace std;

int main()
{
    int x, a, b, c, d, e;
    cin>> x;
    a = x / 60;
    b = x % 60 / 20;
    c = x % 60 % 20 / 10;
    d = x % 60 % 20 % 10 / 5;
    e = x % 60 % 20 % 10 % 5;
    if (e * 15 > 70)
    {
     d++;
     e = 0;
    }
    if (d * 70 + e * 15 > 125)
    {
     c++;
     d = 0;
     e = 0;
    }
    if (c * 125 + d * 70 + e * 15 > 230)
    {
     b++;
     c = 0;
     d = 0;
     e = 0;
    }
    if (b * 230 + c * 125 + d * 70 + e * 15 > 440)
    {
     a++;
     b = 0;
     c = 0;
     d = 0;
     e = 0;
    }
    cout<< e << " " << d << " " << c << " " << b << " " << a;
    return 0;
}

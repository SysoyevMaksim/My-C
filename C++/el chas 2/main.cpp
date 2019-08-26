#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, d, e, f, g, x, y;
    cin>> n;
    a = n/60;
    b = a/60;
    c = b%24;
    d = a%60;
    e = d/10;
    f = d%10;
    g = n%60;
    x = g/10;
    y = g%10;
    cout<< c << ":" << e << f << ":" << x << y;
    return 0;
}

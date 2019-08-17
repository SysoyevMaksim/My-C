#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, x1, x2, y1, y2;
    cin>> a >> b;
    c = b/a;
    d = a/b;
    x1 = b%a;
    x2 = a%b;
    e = ((c - 1) / (c + 1) + 1) * b;
    f = ((d - 1) / (d + 1) + 1) * a;
    y1 = ((x1-1)/(x2+1));
    y2 = ((x2-1)/(x2+1));
    g = e + f - ((y1 * y2) * a);
    cout<< g;
    return 0;
}

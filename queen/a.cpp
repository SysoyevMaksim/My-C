#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, d, x1, x2, y;
    cin>> a >> b >> c >> d;
    y = (b * b - 4 * a * c);
    if (y < 0)
    {
        return 0;
    }
    if (y == 0)
    {
     x1 = (-b + sqrt(y)) / (2 * a);
     cout<< x1;
     return 0;
    }
    x1 = (-b + sqrt(y)) / (2 * a);
    x2 = (-b - sqrt(y)) / (2 * a);
    cout<< x1 << x2;
    return 0;
}

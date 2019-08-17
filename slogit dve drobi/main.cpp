#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, m, n, x, y, z;
    cin>> a >> b >> c >> d;
    n = b * d;
    m = a * d + c * b;
    x = m;
    y = n;
    while(x > 0 && y > 0)
    {
        if(x > y)
        {
            x %= y;
        }
        else
        {
            y %= x;
        }
    }
    z = x + y;
    m /= z;
    n /= z;
    cout<< m << " " << n;
    return 0;
}

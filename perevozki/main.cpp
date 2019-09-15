#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2, q1, q2, p1, p2, a, p0 = 0, p;
    cin>> q1 >> p1 >> q2 >> p2 >> a;
    for(x1 = 0; x1 <= ceil((double)a / q1); x1++)
    {
        x2 = ceil((double)(a - x1 * q1) / q2);
        if(x2 < 0)
        {
            x2 = 0;
        }
        p = x1 * p1 + x2 * p2;
        if(p0 == 0 || p0 > p)
        {
            p0 = p;
        }
    }
    cout<< p0;
    return 0;
}

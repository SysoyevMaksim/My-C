#include <iostream>

using namespace std;

int main()
{
    int a, b, c, max, x1, x2, x3;
    cin>>a >> b >>c;
    if (a>b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    if(max == a)
    {
        x1 = a;
        x2 = b;
        x3 = c;
    }
    if(max == b)
    {
        x1 = b;
        x2 = a;
        x3 = c;
    }
    if(max == c)
    {
        x1 = c;
        x2 = a;
        x3 = b;
    }
    if (x1 >= x2 + x3)
    {
        cout<< "impossible";
        return 0;
    }
    if(x1 * x1 == x2 * x2 + x3 * x3)
    {
        cout<< "right";
    }
    if(x1 * x1 > x2 * x2 + x3 * x3)
    {
        cout<< "obtuse";
    }
    if(x1 * x1 < x2 * x2 + x3 * x3)
    {
        cout<< "acute";
    }
    return 0;
}

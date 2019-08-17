#include <iostream>

using namespace std;

int main()
{
    int x, y, z, a, b;
    cin>> x >> y;
    a = x;
    b = y;
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
    cout<< (int)(a * ((double)b / z));
    return 0;
}

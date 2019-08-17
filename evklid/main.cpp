#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin>> x >> y;
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
    cout<< z;
    return 0;
}

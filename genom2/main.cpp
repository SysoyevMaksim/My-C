#include <iostream>

using namespace std;

int maxinachi(int x, int y, int z, int n)
{
    if(n == 0)
    {
        return 0;
    }
    int i = 1;
    while(1)
    {
        if(n == i)
        {
            return z;
        }
        x = y;
        y = z;
        z = x * 2 + y;
        i++;
    }
}

int main()
{
    int x, y, z, k, a, b;
    cin>> x >> y >> z >> k;
    a = maxinachi(0, 0, 1, k);
    b = maxinachi(0, 0, 2, k - 1);
    cout<< (x*b+y*a+z*b) - (x*a+y*b+z*b);
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, max = 0, max2 = 0, max3 = 0, max4 = 0;
    cin>> n;
    for(int i = 1; i <= sqrt((double)n); i++)
    {
        if(i * i <= n)
        {
            max = i;
        }
        else
        {
            break;
        }
    }
    n -= max * max;
    if(n == 0)
    {
        cout<< max;
        return 0;
    }

    for(int x = 1; x <= max; x++)
    {
        if(x * x <= n)
        {
            max2 = x;
        }
        else
        {
            break;
        }
    }

    n -= max2 * max2;
    if(n == 0)
    {
        cout<< max2 << " " << max;
        return 0;
    }

    for(int y = 1; y <= max2; y++)
    {
        if(y * y <= n)
        {
            max3 = y;
        }
        else
        {
            break;
        }
    }

    n -= max3 * max3;
    if(n == 0)
    {
        cout<< max3 << " " << max2 << " " << max;
        return 0;
    }


    for(int z = 1; z <= max3; z++)
    {
        if(z * z <= n)
        {
            max4 = z;
        }
        else
        {
            break;
        }
    }

    n -= max4 * max4;
    if(n == 0)
    {
        cout<< max4 << " " << max3 << " " << max2 << " " << max;
        return 0;
    }
    return 0;
}

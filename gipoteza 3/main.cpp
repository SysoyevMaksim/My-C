#include <iostream>

using namespace std;

int main()
{
    int n, m, c = 0, d = 0;
    cin>> n;
    m = n;
    for(int i = 2; i < n; i++)
    {
        for(int x = 2; x * x <= i; x++)
        {
            if(i % x == 0)
            {
                c = 1;
                break;
            }
        }
        if(c == 0)
        {
            m = m - i;
            //cout<< m << " ";
            for(int y = 2; y * y <= m; y++)
            {
                //cout<< m % y << " ";
                if(m % y == 0)
                {
                    m = n;
                    d = 1;
                    break;
                }
            }
            if(d == 0)
            {
                cout<< i << " " << m;
                return 0;
            }
            d = 0;
        }
        c = 0;
    }
    return 0;
}

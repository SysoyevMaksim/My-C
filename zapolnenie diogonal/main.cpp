#include <iostream>

using namespace std;

int main()
{
    int n, m, v = -1, c = 1, x = 1, y = 1, array[100] [100];
    cin>> n >> m;
    while(y <= n)
    {
        while(x >= 1 && y <= n)
        {
            array [y] [x] = v;
            v++;
            x--;
            y++;
        }
        if(c > m)
        {
            x = m;
            y = c - m + 1;
        }
        else
        {
            x = c;
            y = 1;
        }
        c++;
    }
    for(int y = 1; y <= n; y++)
    {
        for(int x = 1; x <= m; x++)
        {
            cout<< array [y] [x] << " ";
        }
        cout<< endl;
    }
    return 0;
}

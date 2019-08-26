#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    if(n == 1)
    {
        cout<< 1;
        return 0;
    }
    int x = 1, y = n - 1, steps = n - 1, d = 1, array[100] [100];
    for(int x = 1; x < n; x++)
    {
        for(int y = 0; y < n; y++)
        {
            array[x] [y] = 0;
        }
    }
    for(int i = 0; i < n; i++)
    {
        array[1] [i] = 1;
    }
    while(1)
    {
        for(int h = 0; h <= 1; h++)
        {
            for(int i = 0; i < steps; i++)
            {
                x += d * (1-h);
                y -= d * h;
                array[x][y] = 1;
            }
        }
        d *= -1;
        steps--;
        steps--;
        if(steps == 0)
        {
            for(int xv = 1; xv < n+1; xv++)
            {
                for(int yv = 0; yv < n; yv++)
                {
                    cout<< array [xv] [yv];
                }
                cout<< endl;
            }
            return 0;
        }
    }
    return 0;
}

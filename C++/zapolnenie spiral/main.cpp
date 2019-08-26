#include <iostream>

using namespace std;

int main()
{
    int n, v = 1, d = -1, steps = 1, array [100] [100];
    cin>> n;
    int x = n, y = x;
    array[x] [y] = 0;
    while(1)
    {
        for(int h = 0; h <= 1; h++)
        {
            for(int i = 0; i < steps; i++)
            {
                x += d * (1-h);
                y += d * h;
                array[x][y] = v;
                v++;
                if(v == (2*n+1) * (2*n+1))
                {
                    for(int xv = 0; xv < 2*n+1;xv++)
                    {
                        for(int yv = 0; yv < 2*n+1;yv++)
                        {
                            cout<< array [xv] [yv] << " ";
                        }
                        cout<< endl;
                    }
                    return 0;
                }
            }
        }
        steps++;
        d*=-1;
    }
    return 0;
}

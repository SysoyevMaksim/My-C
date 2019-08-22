#include <iostream>

using namespace std;

int main()
{
    int n, m, max = 0, maxs =  0, kol = 0, array[100] [101], array2 [100];
    cin>> n >> m;
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            cin>> array[x] [y];
        }
    }
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            if(array [x] [y] > maxs)
            {
                maxs = array [x] [y];
            }
        }
        array[x] [m] = maxs;
        maxs = 0;
    }
    for(int i = 0; i < 100; i++)
    {
        array2 [i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        array2[array [i] [m]]++;
        if(array[i] [m] > max)
        {
            max = array [i] [m];
        }
    }
    cout<< array2[max];
    return 0;
}

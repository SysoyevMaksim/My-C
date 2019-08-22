#include <iostream>

using namespace std;

int main()
{
    int n, m, max = 0, maxs =  0, kol = 0, array[100] [101], array2 [100], array3[100] [100];
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
            array3[x] [y] = 0;
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
        array3[array [i] [m]] [i] = 1;
        if(array[i] [m] > max)
        {
            max = array [i] [m];
        }
    }
    cout<< array2[max] << endl;
    for(int i = 0; i < n; i++)
    {
        if(array3[max][i] == 1)
        {
            cout<< i << " ";
        }
    }
    return 0;
}

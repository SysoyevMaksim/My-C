#include <iostream>

using namespace std;

int main()
{
    int n, m, max, maxn, maxn2, maxx = 0, array [100] [102];
    cin>> n >> m;
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            cin>> array [x] [y];
            if(array [x] [y] > maxx)
            {
              maxx = array [x] [y];
              maxn2 = y;
            }
        }
        array [x] [m] = maxx;
        array [x] [m+1] = maxn2;
        maxx = 0;
        maxn2 = 0;
    }
    max = array[0] [m];
    maxn = 0;
    for(int i = 0; i < n; i++)
    {
        if(array[i] [m] > max)
        {
            max = array[i] [m];
            maxn = i;
        }
    }
    cout<< max << endl;
    cout<< maxn << " " << array[maxn] [m+1];
    return 0;
}

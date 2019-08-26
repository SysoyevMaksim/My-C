#include <iostream>

using namespace std;

int main()
{
    int n, m, max, maxn, summ = 0, array [100] [101];
    cin>> n >> m;
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            cin>> array [x] [y];
            summ+= array [x] [y];
        }
        array [x] [m] = summ;
        summ = 0;
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
    cout<< maxn;
    return 0;
}

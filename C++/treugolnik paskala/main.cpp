#include <iostream>

using namespace std;

int main()
{
    int n, m, array[100] [100];
    cin>> n >> m;
    for(int i = 0; i < n; i++)
    {
        array[i] [0] = 1;
    }
    for(int i = 0; i < m; i++)
    {
        array[0] [i] = 1;
    }
    for(int x = 1; x < n; x++)
    {
        for(int y = 1; y < m; y++)
        {
            array [x] [y] = array [x-1] [y] + array [x] [y-1];
        }
    }
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            cout<< array[x] [y] << " ";
        }
        cout<< endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>> n >> m;
    int array [100] [100], array2 [100] [100];
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            cin>> array [x] [y];
        }
    }
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            array2[y] [n-x-1] = array [x] [y];
        }
    }
    cout<< m << " " << n << endl;
    for(int x = 0; x < m; x++)
    {
        for(int y = 0; y < n; y++)
        {
            cout<< array2 [x] [y] << " ";
        }
        cout<< endl;
    }
    return 0;
}

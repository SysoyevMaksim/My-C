#include <iostream>

using namespace std;

int main()
{
    int n, m, array [100] [100], v = 0;
    cin>> n >> m;
    for(int x = 0; x < n; x++)
    {
        if(x%2 == 0)
        {
           for(int y = 0; y < m; y++)
           {
               array[x] [y] = v;
               v++;
           }
        }
        else
        {
            for(int y = m-1; y >= 0; y--)
            {
                array[x] [y] = v;
                v++;
            }
        }
    }
    for(int x = 0; x < n; x++)
        {
            for(int y = 0; y < m; y++)
            {
                cout<< array [x] [y] << " ";
            }
            cout<< endl;
        }
    return 0;
}

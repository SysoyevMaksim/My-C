#include <iostream>

using namespace std;

int main()
{
    int array [1000], n, kol = 0, c, d, e;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    for(int x = 0; x < n - 2; x++)
    {
        if(array[x] < 0)
        {
            break;
        }
        if(array[x] == array[x + 1] && array[x] == array[x + 2])
        {
           c = x;
           for(int y = x + 2; array[y] == array [x] && y < n; y++)
           {
              d = y;
           }
           e = d - c + 1;
           if(d == n - 1)
           {
               kol+= e;
               cout<< e;
               return 0;
           }
           for(int z = d + 1; z < n; z++)
           {
               array[z - e] = array[z];
               array[z] = -1;
           }
           kol += e;
           x = - 1;

        }
    }
    cout<< kol;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int array[1000], n, x, y, z = 0, kol = 0;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    for(int a = 1; a < n - 1; a++)
    {
        if(array[a] == array[a - 1] && array[a] == array[a + 1])
        {
            x = a - 1;
            y = a + 1;
            kol += 3;
            z = 1;
            for(int b = a + 2; b < n; b++)
            {
                if (array[b] == array[a])
                {
                    y ++;
                    kol++;
                }
                else
                {
                    break;
                }
            }
            for(int c = x; c <= y; c++)
            {
                for(int d = x + 1; d < n; d++)
                {
                    array[d - 1] = array[d];
                }
            }
        }
        if(z == 1)
        {
            a--;
            z = 0;
        }

    }
    cout<< kol;
    return 0;
}

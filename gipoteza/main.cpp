#include <iostream>

using namespace std;

int main()
{
    int array[200000], ar[200000], n, k = 0;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        array[i] = i + 2;
    }
    for(int x = 0; x < n; x++)
    {
        if(array[x] > 0)
        ar[k] = array[x];
        k++;
        for(int y = array[x] * array[x]; y < n; y += array[x])
        {
            array[y] = 0;
        }
    }
    for(int z = 0; z <= k; z++)
    {
        cout<< ar[z];
    }
    return 0;
}

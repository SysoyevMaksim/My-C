#include <bits/stdc++.h>

using namespace std;

int main()
{
    int array[100000], n, c, k, a = 0, b = 0, d = 0;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    cin>> k;
    k = k%n;
//    if(k == 0)
//    {
//        for(int z = 0; z < n; z++)
//        {
//            cout<< array[z] << " ";
//        }
//        return 0;
//    }
    if(k >= 0)
    {
        for(int i = n - k; i < (n - k) + (k / 2); i ++)

    {
            c = array[i];
            array[i] = array[n - 1 - a];
            array[n - 1 - a] = c;
            a++;
        }
        for(int x = 0; x < (n - k) / 2; x++)
        {
            c = array[x];
            array[x] = array[n - k - 1 - b];
            array[n - k - 1 - b] = c;
            b++;
        }

    }
    if(k < 0)
    {
        for(int i = - k; i < abs((double)k) + (n + k) / 2; i ++)
        {
            c = array[i];
            array[i] = array[n - 1 - a];
            array[n - 1 - a] = c;
            a++;
        }
        for(int x = 0; x < (-k) / 2; x++)
        {
            c = array[x];
            array[x] = array[-k - 1 - b];
            array[-k - 1 - b] = c;
            b++;
        }
    }
    for(int y = 0; y < n / 2; y++)
    {
        c = array[y];
        array[y] = array[n - 1 - d];
        array[n - 1 - d] = c;
        d++;
    }
    for(int z = 0; z < n; z++)
    {
        cout<< array[z] << " ";
    }
    return 0;
}

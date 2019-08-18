#include <iostream>

using namespace std;

int main()
{
    int array[100000], n, m, k = 1, c, d, e = 0, g = 0, kol = 0;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    cin>> m;
        for(int i = 0; i < n; i ++)
        {
            d = (g + m * k) % n;
            c = array[d];
            array[d] = array[i];
            array[g] = c;
            k++;
            kol++;
        }
    for(int i = 0; i < n; i++)
    {
        cout<< array[i] << " ";
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int array[1000], n, a, b, c, d, e, f = 0;
    cin>> n >> a >> b >> c >> d;
    for(int i = 0; i < n; i++)
    {
        array[i] = i + 1;
    }
    a--;b--;c--;d--;
    for(int i = a; i <= a + (b - a) / 2; i++)
    {
        e = array[i];
        array[i] = array[b - f];
        array[b - f] = e;
        f++;
    }
    f = 0;
    for(int i = c; i <= c + (d - c) / 2; i++)
    {
        e = array[i];
        array[i] = array[d - f];
        array[d - f] = e;
        f++;
    }
    for(int i = 0; i < n; i++)
    {
        cout<< array[i] << " ";
    }
    return 0;
}

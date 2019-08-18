#include <iostream>

using namespace std;

int main()
{
    int n, array [101] [101], copn;
    cin>> n;
    copn = n;
    for(int i = 1; i <= n; i++)
    {
        array [i] [n+1-i] = 1;
    }
    for(int i = 2; i <= n; i++)
    {
        for(int y = i; y <= n; y++)
        {
            array [copn] [y] = 2;
        }
        copn--;
    }
    for(int x = 1; x <= n; x++)
    {
        for(int y = 1; y <= n; y++)
        {
            cout<< array [x] [y] << " ";
        }
        cout<< endl;
    }
    return 0;
}

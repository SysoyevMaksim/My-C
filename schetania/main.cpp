#include <iostream>

using namespace std;

int main()
{
    int n, k, x = 1, y = 1, z = 1;
    cin>> n >> k;
    for(int i = 1; i <= n; i++)
    {
        x = x * i;
    }
    for(int i = 1; i <= k; i++)
    {
        y = y * i;
    }
    for(int i = 1; i <= (n - k); i++)
    {
        z = z * i;
    }
    cout<< x / (y * z);
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int array[10000], n, c, d;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    cin>> c;
    for(int i = 0; i < n - 1; i++)
    {
        if(array[i] >= c && array[i + 1] <= c)
        {
            if(c == array[i + 1])
            {
                continue;
            }
            else
            {
                d = i + 2;
                cout<< d;
                return 0;
            }
        }
    }
    cout<< n + 1;
    return 0;
}

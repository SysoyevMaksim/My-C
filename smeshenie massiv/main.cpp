#include <iostream>

using namespace std;

int main()
{
    int array[35], n, c;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    c = array[n - 1];
    for(int i = n - 1; i >= 0; i--)
    {
        if(i == (n - 1))
        {
            continue;
        }
        if(i != n - 1)
        {
            array[i + 1] = array[i];
        }

    }
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            cout<< c << " ";
            continue;
        }
        cout<< array[i] << " ";
    }
    return 0;
}

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
    cin>> k;
    c = array[(n - k) % n];
    for(int i = n - 1; i >= 0; i--)
    {
        if(i == ((n - k) % n))
        {
            continue;
        }
        if(i != (n - k) % n)
        {
            array[i + k] = array[i];
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

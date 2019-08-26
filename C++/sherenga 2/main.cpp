#include <iostream>

using namespace std;

int main()
{
    int array[10000], n, c;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    cin>> c;
    for(int i = 0; i < n; i++)
    {
        if(array[i] < c)
        {
            cout<< i + 1;
            return 0;
        }
    }
cout<< n + 1;
}

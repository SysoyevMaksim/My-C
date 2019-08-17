#include <iostream>

using namespace std;

int main()
{
    int array[35],n;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    for(int i = 0; i < n; i+= 2)
    {
        if(i == (n - 1))
        {
            array[i] = array[i];
        }
        if(i != n - 1)
        {
            int c = array[i];
            array[i] = array[i + 1];
            array[i + 1] = c;
        }

    }
    for(int i = 0; i < n; i++)
    {
        cout<< array[i] << " ";
    }
    return 0;
}

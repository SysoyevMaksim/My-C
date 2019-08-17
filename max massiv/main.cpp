#include <iostream>

using namespace std;

int main()
{
    int array[35], n, max;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    max = array[0];
    for(int i = 0; i < n; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    cout<< max;
    return 0;
}

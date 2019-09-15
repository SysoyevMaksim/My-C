#include <iostream>

using namespace std;

int main()
{
    int array[1000], n, str, end, dln, sdln = 0;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    for(int i = 0; i < n-2; i++)
    {
        if(array[i] == -1)
        {
            break;
        }
        if(array[i] == array[i+1] && array[i] == array[i+2])
        {
            str = i;
            for(int x = str + 2; array[x] == array[str] && x < n; x++)
            {
                end = x;
            }
            dln = end - str + 1;
            sdln += dln;
            if(end == n -1)
            {
                cout<< dln;
            }
            for(int z = end + 1; z < n; z++)
            {
               array[z-dln] = array [z];
               array[z] = - 1;
            }
            i = -1;
        }
    }
    cout<< sdln;
    return 0;
}

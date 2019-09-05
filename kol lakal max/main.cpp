#include <iostream>

using namespace std;

int main()
{
    int x, a = 0, dlinna = 0, kol = 0, array[1000];
    cin>> x;
    while(x != 0)
    {
        array[a] = x;
        a++;
        dlinna++;
        cin>> x;
    }
    /*for(int i = 0; i < dlinna; i++)
    {
        cout<< i << ":"<< array[i] << " ";
    }
    cout<< endl;*/
    for(int i = 1; i+1 < dlinna; i++)
    {
        if(array[i] > array[i-1] && array[i] > array[i+1])
        {
            kol++;
        }
    }
    cout<< kol;
    return 0;
}

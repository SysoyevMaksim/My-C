#include <iostream>

using namespace std;

int main()
{
    int kol = 0, k, nach = 0, array[300000];
    cin>> k;
    int kon = k-1;
    for(int i = 0; i < k; i++)
    {
        cin>> array[i];
    }
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < k - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                int a = array[j+1];
                array[j+1] = array[j];
                array[j] = a;
            }
        }
    }
    /*for(int i = 0; i < k; i++)
    {
        cout<< array[i] << " ";
    }
    cout<< endl;*/
    while(1)
    {
        if(nach == kon)
        {
            cout<< kol;
            return 0;
        }
        if(array[nach] == 0)
        {
            nach++;
            continue;
        }
        array[nach]--;
        array[kon] = 0;
        kon--;
        kol++;
        /*for(int i = 0; i < k; i++)
        {
            cout<< array[i] << " ";
        }
        cout<< endl;*/
    }
    return 0;
}

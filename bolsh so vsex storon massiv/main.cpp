#include <iostream>

using namespace std;

int main()
{
    int kol = 0;
    int array[100],n;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    for(int i = 1; i < n - 1; i++)
    {
        if(array[i] > array[i - 1] && array[i] > array[i + 1])
        {
            kol++;
        }
    }
    cout<< kol;
    return 0;
}

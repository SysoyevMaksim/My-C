#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    int max = 0, min = 0, kol = 0, pred = -1, lenght, c = 0;
    for(int i = 0; i < n; i++)
    {
        if(array[i] == pred)
        {
            if(c == 0)
            {
                lenght = 2;
                kol++;
                c = 1;
            }
            else
            {
                lenght++;
            }
        }
        else
        {
            if(c == 1)
            {
                if(max < lenght)
                {
                    max = lenght;
                }
                if(min > lenght || min == 0)
                {
                    min = lenght;
                }
                lenght = 0;
                c = 0;
            }
        }
        pred = array[i];
    }
    if(c == 1)
            {
                if(max < lenght)
                {
                    max = lenght;
                }
                if(min > lenght || min == 0)
                {
                    min = lenght;
                }
                lenght = 0;
                c = 0;
            }
    cout<< kol << " " << max << " " << min;
    return 0;
}

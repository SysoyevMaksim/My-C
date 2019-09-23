#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, array[100000], stoim, summ = 0, kol = 0, kolvseg = 0;
    double sred;
    string s;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        array[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        cin>> s;
        if(s == "+")
        {
            cin>> stoim;
            array[i] = stoim;
        }
        if(s == "-")
        {
            for(int j = 0; j < i; j++)
            {
                if(array[j] > 0)
                {
                    array[j] == 0;
                    break;
                }
            }
        }
        if(s == "?")
        {
            for(int j = 0; j < i; j++)
            {
                if(array[j] > 0)
                {
                    kolvseg++;
                    summ+= array[j];
                }
            }
            sred = summ / (double)kolvseg;
            for(int a = 0; a < i; a++)
            {
                if(array[a] == sred)
                {
                    kol++;
                }
            }
            cout<< kol;
            kol = 0;
            kolvseg = 0;
            summ = 0;
        }
    }
    return 0;
}

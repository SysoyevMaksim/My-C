#include <iostream>

using namespace std;

int evklid(int x, int y)
{
    while(x > 0 && y > 0)
    {
        if(x > y)
        {
            x %= y;
        }
        else
        {
            y %= x;
        }
    }
    return x + y;
}

int main()
{
    int n, array[500500], start1 = 0, end1;
    cin>> n;
    int zap = n;
    for(int i = 0; i < n; i++)
    {
        cin>> array [i];
    }
    n--;
    end1 = start1 + n;
    //cout<< start1 << " " << n << " " << end1 << endl;
    while(1)
    {
        if(n == 0)
        {
            //array[zap] = evklid(array[4], array[4+1]);
            for(int i = 0; i < 10; i++)
            {
                //cout<< array[i] << " ";
            }
            //cout<< start1 << " " << end1 << endl;
            cout<< array[zap - 1];
            //cout<< evklid(9, 15);
            return 0;
        }
        for(int i = start1; i < end1; i++)
        {
            //cout<< zap << endl;
            array[zap] = evklid(array[i], array[i+1]);
            zap++;
        }
        n--;
        start1 = end1;
        end1 = start1 + n;
        //cout<< start1 << " " << n << " " << end1 << endl;
    }
    return 0;
}

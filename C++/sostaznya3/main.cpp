#include <iostream>

using namespace std;

int main()
{
    int n, m, max, maxn, maxn2, summ = 0, maxx = 0, sravn, array [100] [102];
    cin>> n >> m;
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            cin>> array [x] [y];
            summ+= array[x] [y];
            if(array [x] [y] > maxx)
            {
              maxx = array [x] [y];
              maxn2 = y;
            }
        }
        array [x] [m] = maxx;
        array [x] [m+2] = summ;
        array [x] [m+1] = maxn2;
        maxx = 0;
        maxn2 = 0;
        summ = 0;
    }
    max = array[0] [m];
    sravn = array[0] [m+2];
    maxn = 0;
    for(int i = 0; i < n; i++)
    {
        if(array[i] [m] > max || array[i] [m] == max && array[i] [m+2] > sravn)
        {
            max = array[i] [m];
            maxn = i;
            sravn = array[i] [m+2];
        }
    }
    //cout<< max << endl;
    /*for(int i = 0;i < n; i++)
    {
        cout<<array[i] [m] <<" " <<array[i] [m+2] << endl;
    }*/
    cout<< maxn;
    //cout<< " " << array[maxn] [m+1];
    return 0;
}

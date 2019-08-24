#include <iostream>

using namespace std;

/*int poisk(int n,int m,int x,int y, int array[100] [100])
{
    int kol = 0;
    for(int x1 = x-1; x1 < x+1; x1++)
    {
        for(int y1 = y-1; y1 < y+1; y1++)
        {
            if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m)
            {
                if(array[x1] [y1] = -1)
                {
                    kol++;
                }
            }
        }
    }
    return kol;
}*/

int main()
{
    int n, m, array [100] [100], a, x2, y2, kol = 0;
    cin>> n >> m;
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            array [x] [y] = 0;
        }
    }
    cin>> a;
    for(int i = 0; i < a; i++)
    {
        cin>> x2 >> y2;
        x2--;
        y2--;
        array [x2] [y2] = -1;
    }
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            if(array [x] [y] == -1)
            {
                cout<< "* ";
            }
            else
            {
                cout<< array [x] [y] << " ";
            }
            //cout<< array [x] [y] << " ";
        }
        cout<< endl;
    }
    cout<< endl;
    cout<< endl;
    cout<< endl;
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            if(array [x] [y] == 0)
            {
                //array [x] [y] = poisk(n, m, x, y, array);

                for(int x1 = x-1; x1 < x+1; x1++)
                {
                    for(int y1 = y-1; y1 < y+1; y1++)
                    {
                        if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m)
                        {
                            if(array[x1] [y1] == -1)
                            {
                                kol++;
                            }
                        }
                    }
                }
                array [x] [y] = kol;
                kol = 0;
            }
        }
    }
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            if(array [x] [y] == -1)
            {
                cout<< "* ";
            }
            else
            {
                cout<< array [x] [y] << " ";
            }
            //cout<< array [x] [y] << " ";
        }
        cout<< endl;
    }
    return 0;
}

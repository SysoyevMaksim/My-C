#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    bool mx = false, my = false;
    cin>> x1 >> x2 >> y1 >> y2;
    /*if(x1 == 0 && y1 == 0)
    {
        cout << 0;
        return 0;
    }
    if((x1 < 0 && x2 >= 0)||(x1 >= 0 && x2 < 0))
    {
        mx = true;
    }
    else
    {
        x1 = abs(x1);
        x2 = abs(x2);
    }
    if((y1 < 0 && y2 >= 0)||(y1 >= 0 && y2 < 0))
    {
        my = true;
    }
    else
    {
        y1 = abs(y1);
        y2 = abs(y2);
    }
    if(mx)
    {
        if(!my)
        {
            cout<< -1;
            return 0;
        }
    }
    else
    {
        if(my)
        {
            cout<< 1;
            return 0;
        }
    }
    if(x1 == y1)
    {
        if(x2 > y2)
        {
            cout<< -1;
            return 0;
        }
        if(x2 < y2)
        {
            cout<< 1;
            return 0;
        }
        if(x2 == y2)
        {
            cout<< 0;
            return 0;
        }
    }
    if(x2 == y2)
    {
        if(x1 > y1)
        {
            cout<< 1;
            return 0;
        }
        if(x1 < y1)
        {
            cout<< -1;
            return 0;
        }
    }*/
    long double x = (long double)x1 / x2;
    long double y = (long double)y1 / y2;
    if(x > y)
    {
        cout << 1;
    }
    if(x < y)
    {
        cout<< -1;
    }
    if(x == y)
    {
        cout<< 0;
    }
    return 0;
}

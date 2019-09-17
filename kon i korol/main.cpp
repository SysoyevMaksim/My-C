#include <iostream>
#include <string>

using namespace std;

int korol(int a, int b, int c, int d)
{
    int e, f, g, x;
    e = a-1;
    f = a+1;
    g = b-1;
    x = b+1;
    if(c == e || c == f || c== a)
    {
        if (d == g || d == x || d== b)
        {
            return 2;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
}
int kon(int a, int b, int c, int d)
{
    if(c == a+1 && d == b+2 || c == a+1 && d == b-2 || c == a+2 && d == b+1 || c == a+2 && d == b-1 || c == a-1 && d == b+2 || c == a-1 && d == b-2 || c == a-2 && d == b+1 || c == a-2 && d == b-1)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int a, b, c, d, flagl = 0, flag2 = 0, flag3 = 0, flag4 = 0;
    string co1, co2;
    cin>> co1 >> co2;
    a = co1[0] - 'a';
    b = co1[1] - '0';
    c = co2[0] - 'a';
    d = co2[1] - '0';
    if(kon(a, b, c, d) == 2)
    {
        cout<< "Y";
    }
    else
    {
        cout<< "N";
    }
    if(korol(a, b, c, d) == 2)
    {
        cout<< "Y";
        flag3 = 1;
    }
    else
    {
        cout<< "N";
    }
    if(flag3 == 0)
    {
        for(int x = a - 1; x <= a + 1; x++)
        {
            for(int y = b - 1; y <= b + 1; y++)
            {
                if(korol(x, y, c, d) == 2)
                {
                    cout<< "Y";
                    flag4 = 1;
                    break;
                }
            }
            if(flag4 == 1)
            {
                break;
            }
        }
        if(flag4 == 0)
        {
            cout<< "N";
        }
    }
    else
    {
        cout<< "N";
    }
    return 0;
}

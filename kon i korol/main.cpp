#include <iostream>
#include <string>
#include <fstream>

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
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    int a, b, c, d, flagl = 0, flag2 = 0, flag3 = 0, flag4 = 0;
    string co1, co2;
    infile>> co1 >> co2;
    a = co1[0] - 'a';
    b = co1[1] - '1';
    c = co2[0] - 'a';
    d = co2[1] - '1';
    if(kon(a, b, c, d) == 2)
    {
        outfile<< "Y";
        flagl = 1;
    }
    else
    {
        outfile<< "N";
    }
    if(flagl == 0)
    {
        for(int x = a - 2; x <= a + 2; x++)
        {
            for(int y = b - 2; y <= b + 2; y++)
            {
                if(x != a && y != b && abs(x) != abs(y))
                {
                    //cout<< x << " " << y << endl;
                    if(kon(x, y, c, d) == 2 && x >= 0 && y >= 0)
                    {
                        outfile<< "Y";
                        flag2 = 1;
                        break;
                    }
                }
            }
            if(flag2 == 1)
            {
                break;
            }
        }
        if(flag2 == 0)
        {
            outfile<< "N";
        }
    }
    else
    {
        outfile<< "N";
    }
    if(korol(a, b, c, d) == 2)
    {
        outfile<< "Y";
        flag3 = 1;
    }
    else
    {
        outfile<< "N";
    }

    if(flag3 == 0)
    {
        for(int x = a - 1; x <= a + 1; x++)
        {
            for(int y = b - 1; y <= b + 1; y++)
            {
                if(korol(x, y, c, d) == 2)
                {
                    outfile<< "Y";
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
            outfile<< "N";
        }
    }
    else
    {
        outfile<< "N";
    }
    return 0;
}

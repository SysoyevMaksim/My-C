#include <iostream>
#include <fstream>
using namespace std;

bool nod(int x, int y)
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
    if (x + y == 1)
    {
        return true;
    }
    return false;
}

int main()
{
    ifstream cin ("input.txt");
    ofstream cout ("output.txt");
    int N;
    unsigned long long kol = 0;
    long double X;
    cin >> X >> N;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j < i; j++)
        {
            if(nod(i, j))
            {
                if((double)j / i <= X)
                {
                    kol++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout<< kol;
    return 0;
}

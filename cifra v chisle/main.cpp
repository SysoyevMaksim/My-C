#include <iostream>

using namespace std;

int main()
{
    int x, d, kol=0;
    cin>> x >> d;
    for(int i = x; i > 0; i=i/10)
    {
        int t;
        t = x%10;
        x = x/10;
        if (t == d)
        {
            kol++;
        }
    }
    cout<< kol;
    return 0;
}

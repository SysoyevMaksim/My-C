#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, kol = 0;
    cin >> x;
    for(int i = 1; i < sqrt(x); i++)
    {
        if(x%i == 0)
        {
            kol++;

        }


    }
    kol = kol * 2;
    if(x % int(sqrt(x)) == 0)
    {
     kol++;
    }
    cout<< kol;
    return 0;
}

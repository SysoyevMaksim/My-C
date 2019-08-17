#include <iostream>

using namespace std;

int main()
{
    int x, pred = 0, kol = 0;
    cin>> x;
    while(x != 0)
    {
        if(pred != 0)
        {
            if(x > pred)
            {
                kol++;
            }
        }
        pred = x;
        cin>> x;
    }
    cout<< kol;
    return 0;
}

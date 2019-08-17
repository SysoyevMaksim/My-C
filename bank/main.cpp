#include <iostream>

using namespace std;

int main()
{
    int x, p, y, i = 0;
    cin>> x >> p >> y;
    while(1)
    {
        if (x >= y)
        {
            cout<< i;
            return 0;
        }
        x = x + (x * p / 100);
        i++;
    }
    return 0;
}

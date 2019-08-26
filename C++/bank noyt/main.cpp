#include <iostream>

using namespace std;

int main()
{
    int x, p, y, i = 0;
    cin>> x >> p >> y;
    x *= 100;
    y *= 100;
    while(x < y)
    {
        x = x + (x * p / 100);
        i++;
    }
    cout<< i;
    return 0;
}

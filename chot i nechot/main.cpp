#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, f, g;
    d = a%2;
    f = b%2;
    g = c%2;
    if ((d == 0 || f == 0 || g == 0)&&(d == 1 || f == 1 || g == 1))
    {
     cout<< "YES";
    }
    else
    {
     cout<< "NO";
    }
    return 0;
}

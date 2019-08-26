#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, x;
    cin>> a >> b >> c >> d;
    if(a == 0 && b == 0)
    {
        cout<< "INF";
        return 0;
    }
    x = -b / a;
    if (-b % a != 0)
    {
        cout<< "NO";
        return 0;
    }
    if (( c * x + d ) != 0)
    {
        cout<< x;
        return 0;
    }
    cout<< "NO";
    return 0;
}

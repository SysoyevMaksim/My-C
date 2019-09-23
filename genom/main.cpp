#include <iostream>

using namespace std;

int main()
{
    long long x, y, z, x2, y2, z2, n;
    cin>> x >> y >> z >> n;
    for(int i = 0; i < n; i++)
    {
        x2 = y + z;
        y2 = x + z;
        z2 = y + x;
        x = x2;
        y = y2;
        z = z2;
    }
    //cout<< x << " " << y << " " << z;
    cout<< x - y;
    return 0;
}

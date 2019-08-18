#include <iostream>

using namespace std;

int main()
{
    int n, x, y, z;
    cin >> n;
    x = n / 60;
    y = n % 60 / 10;
    z = n - x * 60 - y * 10;

    if (z * 15 > 125)
    {
        y++;
        z = 0;
    }

    if (y * 125 + z * 15 > 440)
    {
        x++;
        y = 0;
        z = 0;
    }
    cout << z << " " << y << " " << x;
    return 0;
}

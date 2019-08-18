#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin>> x;
    y = (x/10) % 10;
    z = x%10;
    if(y == 1)
    {
        cout<< x << " " << "bochek";
        return 0;
    }
    if(z == 1)
    {
        cout<< x << " " << "bochka";
        return 0;
    }
    if(z == 2 || z == 3 || z == 4)
    {
        cout<< x << " " << "bochki";
        return 0;
    }
    if(z == 5 || z == 6 || z == 7 || z == 8 || z == 9 || z == 0)
    {
        cout<< x << " " << "bochek";
        return 0;
    }
    return 0;
}

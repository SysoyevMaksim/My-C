#include <iostream>

using namespace std;

//korov
//korova
//korovy
int main()
{
    int x, y, z;
    cin>> x;
    y = x/10;
    z = x%10;
    if(y == 1)
    {
        cout<< x << " " << "korov";
        return 0;
    }
    if(z == 1)
    {
        cout<< x << " " << "korova";
        return 0;
    }
    if(z == 2 || z == 3 || z == 4)
    {
        cout<< x << " " << "korovy";
        return 0;
    }
    if(z == 5 || z == 6 || z == 7 || z == 8 || z == 9 || z == 0)
    {
        cout<< x << " " << "korov";
        return 0;
    }
    return 0;
}

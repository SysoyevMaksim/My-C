#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, x = 0, y = 0, z = 1;
    cin>> n;
    while(1)
    {
        if(n == i)
        {
            cout<< z;
            return 0;
        }
        x = y;
        y = z;
        z = x + y;
        i++;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x, i = 2;
    cin>> x;
    while(i <= x)
    {
        if(x % i == 0)
        {
            cout<< i;
            return 0;
        }
        i ++;
    }
    return 0;
}

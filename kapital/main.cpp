#include <iostream>

using namespace std;

int main()
{
    int a, b = 0, n;
    cin>> a >> n;
    if(9 * n < a)
    {
        cout<< -1;
        return 0;
    }
    while(a >= 9)
    {
        cout<< 9;
        a -= 9;
        n--;
    }
    if(a > 0)
    {
        cout<< a;
        a = 0;
        n--;
    }
    while(n > 0)
    {
        cout<< 0;
        n--;
    }
    return 0;
}

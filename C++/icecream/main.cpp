#include <iostream>

using namespace std;

int main()
{
    int k, x, z;
    cin>> k;
    x = k%5;
    z = x%3;
    if(z == 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

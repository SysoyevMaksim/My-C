#include <iostream>

using namespace std;

int main()
{
    int k, x, z;
    cin>> k;
    x = k%3;
    z = x&5;
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

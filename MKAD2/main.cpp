#include <iostream>

using namespace std;

int main()
{
    int v, t, a, b, c, d, e;
    a = 109;
    cin>>v >>t;
    b = v*t;
    c = b%a;
    d = 109+c;
    e = d%109;
    cout<<e;
    return 0;
}

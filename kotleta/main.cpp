#include <iostream>

using namespace std;

int main()
{
    int k, m ,n, v, t, c;
    cin>> k >> m >> n;
    t = n/k;
    v = n%k;
    c = t*m*2 + v*m*2;
    cout<<c;
    return 0;
}

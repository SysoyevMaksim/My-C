#include <iostream>

using namespace std;

int main()
{
    int k, m ,n, v, t, c;
    cin>> k >> m >> n;
    t = n/k;
    v = n%k;
    if (v > 0) {
        t = t + 1;
    }
    c = t * 2;
    if (v > 0 && v <= k / 2 && t > 1) {
        c = c - 1;
    }
    c = c * m;
    //c = t*m*2 + v*m*2;
    cout<<c;
    return 0;
}

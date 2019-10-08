#include <iostream>

using namespace std;

int main()
{
    int n, m, a, c, d, e;
    cin>> n >> m >> a;
    c = (m*n)/(a*a);
    d = (m*n)%(a*a);
    e = c + 1 + ((d-1)/(d+1));
    cout<< e;
    return 0;
}

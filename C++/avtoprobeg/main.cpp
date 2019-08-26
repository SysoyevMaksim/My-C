#include <iostream>

using namespace std;

int main()
{
    int n, m, c, d, e;
    cin>> n >> m;
    c = m/n;
    d = m%n;
    e = c + 1 + ((d-1)/(d+1));
    cout << e;
    return 0;
}

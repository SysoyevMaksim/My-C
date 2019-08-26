#include <iostream>

using namespace std;

int main()
{
    int n, m, x1, x2;
    cin>> n >> m;
    x1 = n%m;
    x2 = m%n;
    cout<< 1 + (x1 * x2);
    return 0;
}

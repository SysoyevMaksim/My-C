#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>> n >> m;
    if ((m % 2 == 0 || n % 2 == 0) && n != 1 && m != 1)
        cout << n * (m + 1) + m + m * (n + 1) + n;
    else
        cout << n * (m + 1) + m - 1 + m * (n + 1) + n - 1;
    return 0;
}

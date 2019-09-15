#include <iostream>
#include <algorithm>

using namespace std;

int x, k = 0, a[10], i, m = 0, M = 0, ans, k1 = 0;

int main()
{
    cin >> x;
    while (x > 0)
    {
        a[k++] = x % 10;
        x /= 10;
    }
    sort(a, a + k);
    for (i = 0; i < k; i++)
        m = m * 10 + a[i];
    for (i = k - 1; i >= 0; i--)
        M = M * 10 + a[i];
    ans = M - m;
    x = ans;
    while (x > 0)
    {
        x /= 10;
        k1++;
    }
    for (i = 0; i < k - k1; i++)
        cout << "0";
    cout << ans;
    return 0;
}

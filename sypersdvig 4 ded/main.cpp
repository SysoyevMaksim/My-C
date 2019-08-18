#include <iostream>

using namespace std;

int main()
{
    int array[100000], n, k, d, c;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cin >> k;
    k = k % n;
    // cout << k;

    for (int i = 0; i < n; i++)
    {
        d = (k * (i + 1)) % n;
        c = array[d];
        array[d] = array[0];
        array[0] = c;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a (5);
    a[0] = 14;
    a[1] = 25;
    a[2] = 27;
    a[3] = 28;
    a[4] = 31;
    vector <int> :: iterator v = (upper_bound(a.begin(), a.end(), 31) );

    cout<< *v;
    return 0;
}

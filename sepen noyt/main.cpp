#include <iostream>

using namespace std;

int main()
{
    double ao, a;
    int n;
    cin>> ao >> n;
    if(n == 0)
    {
        cout<< 1;
        return 0;
    }
    a = ao;
    for(int i = 2; i <= n; i++)
    {
        a *= ao;
    }
    cout<< a;
    return 0;
}

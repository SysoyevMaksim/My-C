#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    cin>> a >> b;
    int n;
    cin>> n;
    while(a.length() < n)
    {
        a = a + a + b;
    }
    cout<< a [n - 1];
    return 0;
}

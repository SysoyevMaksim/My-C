#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c;
    cin>> n;
    a = n/60;
    b = a%24;
    c = n%60;
    cout<< b << " " << c;
    return 0;
}

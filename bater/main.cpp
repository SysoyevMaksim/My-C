#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin>>a >>b;
    c = b;
    b = a;
    a = c;
    cout<<a <<" " <<b;
    return 0;
}

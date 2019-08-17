#include <iostream>

using namespace std;

int main()
{
    char c, d = 0;
    cin>> c;
    if(c >= 'a' && c <= 'z')
    {
        c = c - ('a' - 'A');
        d = 1;
    }
    if(c >= 'A' && c <= 'Z' && d == 0)
    {
        c = c + ('a' - 'A');
    }
    cout<< c;
    return 0;
}

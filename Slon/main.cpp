#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, t;
    cin>> a >> b >> c >> d;
    e = a - b;
    f = c - d;
    g = c - a;
    t = b - g;
    if (e == f)
    {
     cout<<"YES";
    }
    else
    {
     if(t == d)
     {
      cout<<"YES";
     }
     else
     {
      cout<<"NO";
     }
    }
    return 0;
}

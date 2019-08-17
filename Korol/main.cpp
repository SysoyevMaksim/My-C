#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, x;
    cin>> a >> b >> c >> d;
    e = a-1;
    f = a+1;
    g = b-1;
    x = b+1;
    if(c == e || c == f || c== a)
    {
     if (d == g || d == x || d== b)
     {
      cout<<"YES";
     }
     else
     {
      cout<<"NO";
     }
    }
    else
    {
     cout<<"NO";
    }
    return 0;
}

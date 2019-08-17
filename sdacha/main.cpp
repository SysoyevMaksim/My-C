#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, q;
    cin>> a >> b >> c >> d;
    q = d - b;
    if (q < 0)
    {
     f = q+100;
     c = c-1;
     e = c-a;
     cout<< e <<" " << f;
    }
    else
    {
     f = q;
     e = c-a;
     cout<< e <<" " << f;
    }

    return 0;
}

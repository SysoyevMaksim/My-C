#include <iostream>

using namespace std;

int main()
{
    long long n, m, k, d, e, f;
    cin>> n >> m >> k;
    d = k%n;
    e = k%m;
    f = m*n;
    if(n == 1 && m == 1)
    {
     cout<<"NO";
    }
    else
    {
     if(k > f)
     {
      cout<<"NO";
     }
     else
     {
      if(d == 0 || e == 0)
      {
       cout<<"YES";
      }
      else
      {
       cout<<"NO";
      }
     }
    }
    return 0;
}

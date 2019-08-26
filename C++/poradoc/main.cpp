#include <iostream>

using namespace std;

int main()
{
    int a, b, c, f, s, t;
    cin>> a >> b >> c;
    if(a >= b && a >= c)
    {
     t = a;
     if(b>=c)
     {
      s = b;
      f = c;
      cout<< f << s << t;
     }
     else
     {
      s = c;
      f = b;
      cout<< f << s << t;
     }
    }
    else
    {
     if(b >= a && b >= c)
     {
      t = b;
      if(a >= c)
      {
       s = a;
       f = c;
       cout<< f << s << t;
      }
      else
      {
       s = c;
       f = a;
       cout<< f << s << t;
      }
     }
     else
     {
      if(c >= a && c >= b)
      {
       t = c;
       if(a >= b)
       {
        s = a;
        f = b;
        cout<< f << s << t;
       }
       else
       {
        s = b;
        f = a;
        cout<< f << s << t;
       }
      }
     }
    }
    return 0;
}

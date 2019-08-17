#include <iostream>

using namespace std;

int main()
{
    int a, b, x, y, z;
    cin>> a >> b;
    y = 0 - b;
    if(a == 0)
    {
     if(y == 0)
     {
      cout<< "INF";
     }
     else
     {
      cout<<"NO";
     }
    }
    else
    {
     z = y%a;
     if(z != 0)
     {
      cout<< "NO";
     }
     else
     {
      x = y/a;
      cout<< x;
     }
    }
    return 0;
}

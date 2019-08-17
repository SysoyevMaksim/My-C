#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b)
    {
     if(a == c)
     {
      cout<< "3";
     }
     else
     {
      cout<< "2";
     }
    }
    else
    {
     if(a == c)
     {
      cout<< "2" ;
     }
     else
     {
      cout<< "0";
     }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin>> a;
    b = a%4;
    c = a%100;
    d = a%400;
    if(b == 0)
    {
     if(c == 0)
     {
      if(d == 0)
      {
       cout<<"YES";
      }
      else
      {
       cout<<"NO";
      }}
     else
     {
      cout<<"YES";
     }}
    else
    {
     cout<<"NO";
    }
    return 0;
}

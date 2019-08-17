#include <iostream>

using namespace std;

int main()
{

    int M, N, x, y, x1, x2, y1, y2;
    cin>>M >> N >> x >> y;
    x1 = x-1;
    x2 = x+1;
    y1 = y-1;
    y2 = y+1;
    if (x1>0)
    {
     cout<< x1 << y;
     if (x2<=M)
     {
      cout<< x2 << y;
      if(y1>0)
      {
       cout<< x << y1;
       if(y2<=N)
       {
        cout<< x << y2;
       }
       else
       {
        x = x;
       }
      }
      else
      {
       if(y2<=N)
       {
        cout<< x << y2;
       }
       else
       {
        x = x;
      }
     }
     else
     {
      if(y1>0)
      {
       cout<< x << y1;
       if(y2<=N)
       {
        cout<< x << y2;
       }
       else
       {
        x = x;
       }
      else
      {
       if(y2<=N)
       {
        cout<< x << y2;
       }
       else
       {
        x = x;
      }
     }
    }
    else
    {
     if (x2<=M)
     {
      cout<< x2 << y;
      if(y1>0)
      {
       cout<< x << y1;
       if(y2<=N)
       {
        cout<< x << y2;
       }
       else
       {
        x = x;
       }
      else
      {
       if(y2<=N)
       {
        cout<< x << y2;
       }
       else
       {
        x = x;
      }
     else
     {
      if(y1>0)
      {
       cout<< x << y1;
       if(y2<=N)
       {
        cout<< x << y2;
       }
       else
       {
        x = x;
       }
    }
    return 0;
}

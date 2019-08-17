#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>> N;
    if(N == 0)
    {
     cout<< "YES";
    }
    for(int i = 0; i < N; i++)
    {
     int t;
     cin>> t;
     if(t == 0)
     {
      cout<< "YES";
      return 0;
     }
    }
    if(N != 0)
    cout<< "NO";
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x, max = 0, kol = 0;
    cin>> x;
    while(x != 0)
    {
     if(x > max)
     {
         max = x;
         kol = 0;
     }
     if(x == max)
     {
         kol++;
     }
     cin>> x;
    }
    cout<< kol;
    return 0;
}

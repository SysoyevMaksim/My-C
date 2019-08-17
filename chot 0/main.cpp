#include <iostream>

using namespace std;

int main()
{
    int x, kol = 0;
    cin>> x;
    while(x != 0)
    {
     if(x % 2 == 0)
     {
         kol++;
     }
     cin>> x;
    }
    cout<< kol;
    return 0;
}

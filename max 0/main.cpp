#include <iostream>

using namespace std;

int main()
{
    int x, max = 0;
    cin>> x;
    while(x != 0)
    {
     if(x > max)
     {
         max = x;
     }
     cin>> x;
    }
    cout<< max;
    return 0;
}

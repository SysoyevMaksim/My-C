#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 4;
    for(int i = 0; i < 1000; i++)
    {
     int c = a*b;
     int d = (a+1)*(b-1);
     cout<< d - c << " ";
     a++;
     b++;
    }
    return 0;
}

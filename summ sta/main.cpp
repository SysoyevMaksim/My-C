#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for(int i = 0; i < 100; i++)
    {
     int t;
     cin>> t;
     sum = sum + t;
    }
    cout<< sum;
    return 0;
}

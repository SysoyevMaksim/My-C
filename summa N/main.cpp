#include <iostream>

using namespace std;

int main()
{
    int sum = 0, N;
    cin>> N;
    for(int i = 0; i < N; i++)
    {
     int t;
     cin>> t;
     sum = sum + t;
    }
    cout<< sum;
    return 0;
}

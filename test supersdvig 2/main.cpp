#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int array[100000], n, k;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    cin>> k;
    for(int i = 0; i < n; i++)
    {
       cout<< array[(int)(i * abs((double)k) + k) % i] << " ";
    }
}

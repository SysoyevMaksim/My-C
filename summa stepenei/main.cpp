#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, summa = 0;
    cin>> x;
    for(int i = 0; i <= x; i++)
    {
        summa += pow(2, i);
    }
    cout<< summa;
    return 0;
}

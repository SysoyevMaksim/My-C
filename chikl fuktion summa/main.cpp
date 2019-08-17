#include <iostream>

using namespace std;

int main()
{
    int x, summa = 0, y;
    cin>> x;
    int SumOfDigits = while(x > 0)
    {
        y = x % 10;
        summa += y;
        x / 10;
    }
    cout<< SumOfDigits(x);
    return 0;
}

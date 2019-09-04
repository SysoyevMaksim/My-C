#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 1, n;
    double c, summa = 0;
    cin>> n;
    while(n >= 0)
    {
        c = (double)a / b;
        summa += c;
        //cout<< a << " " << b << " " << c << " "<< summa << endl;
        a *= -1;
        b += 2;
        n--;
    }
    cout<< summa * 4;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x, faktorial = 1, summa2;
    double summa = 0;
    cin>> x;
    for(int i = 1; i <= x; i++)
{


        faktorial *= i;

    summa += 1/(double)faktorial;

}
summa2 = summa * 100000;
summa = (double)summa2 / 100000;
cout<< summa + 1;
return 0;
}

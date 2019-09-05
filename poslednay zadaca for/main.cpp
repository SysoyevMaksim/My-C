#include <iostream>

using namespace std;

int main()
{
    double x, faktorial = 1;
    int summa2;
    double summa = 1;
    cin>> x;
    for(double i = 1; i <= x; i++)
{


        faktorial *= i;
        //cout<< faktorial << " ";

    summa += 1/(double)faktorial;
    //cout<< 100000/(double)faktorial << " "<< summa << endl;

}
summa2 = summa * 100000;
summa = (double)summa2 / 100000;
//cout<< (long double)summa/100000;
cout<< summa;
return 0;
}

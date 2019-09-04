#include <iostream>

using namespace std;

int main()
{
    unsigned long long x, faktorial = 1, summa2;
    unsigned long long summa = 100000;
    cin>> x;
    for(unsigned long long i = 1; i <= x; i++)
{


        faktorial *= i;
        //cout<< faktorial << " ";

    summa += 100000/(double)faktorial;
    //cout<< 100000/(double)faktorial << " "<< summa << endl;

}
//summa2 = summa * 100000;
//summa = (double)summa2 / 100000;
cout<< (long double)summa/100000;
return 0;
}

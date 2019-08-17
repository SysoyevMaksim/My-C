#include <iostream>

using namespace std;

int main()
{
    int x, faktorial = 1;
    double summa = 0;
    cin>> x;
    for(int i = 1; i <= x; i++)
{


        faktorial *= i;

    summa += 1/(double)faktorial;

}
cout<< summa + 1;
return 0;
}

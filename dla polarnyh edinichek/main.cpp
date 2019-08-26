#include <iostream>
#include <cmath>

using namespace std;

int prostdel (unsigned long long n)
{
    int c = 0;
    while(n > 1)
    {
        for(unsigned long long i = 2; i <= sqrt((double)n); i++)
        {
            if(n % i == 0)
            {
                cout<< i << " ";
                n /= i;
                //cout<< n << " ";
                c = 1;
                break;
            }
        }
        if(c == 0)
        {
            cout<< n;
            return 0;
        }
        c = 0;

    }
}

int main()
{
    //int n;
    //cin>> n;
    unsigned long long itog = 0;
    for(unsigned long long i = 0; i <= 100; i++)
    {
      itog += pow(2, i);
      cout<< i+1 << "   ";
      //cout<< itog << "  ";
      prostdel(itog);
      cout<< endl;
    }

    return 0;
}

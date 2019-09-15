#include <iostream>

using namespace std;

int factorial (int n)
     {
         if (n==0)
         {
             return 1;
         }
         else
         {
             return n*factorial(n-1);
         }
     }
int C (int n, int k)
{
    cout << factorial (n) << " " << factorial (n-k) << " " << factorial (k) << endl;
    return factorial (n) / (factorial (n-k) * factorial (k));
}

int main()
{
    int n, summ = 0;
    cin>> n;
    for(int k = 0; k <= n; k++)
    {
        summ+= C(n, k);
        //cout<< C(n, k) << endl;
        //cout<< summ << endl;
    }
    cout<< factorial(13) << " ";
    cout<< summ;
    return 0;
}

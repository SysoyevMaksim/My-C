#include <iostream>

using namespace std;

int main()
{
    int N, kol;
    cin>> N;
    kol = N / 3;
    if(N % 3 == 0)
    {
        kol--;
    }
    cout<< kol;
    return 0;
}

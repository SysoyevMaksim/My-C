#include <iostream>

using namespace std;

int main()
{
    int N, kol = 0;
    cin>> N;
    if (N == 0)
    {
        kol++;
    }
    for(int i = 0; i < N; i++)
    {
        int t;
        cin>> t;
        if(t == 0)
        {
            kol++;
        }
    }
    cout<< kol;
    return 0;
}

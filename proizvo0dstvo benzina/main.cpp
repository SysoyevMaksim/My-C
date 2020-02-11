#include <iostream>

using namespace std;

int main()
{
    int n, A, B, C, minnomber;
    long double min = -1;
    cin>> n;
    for(int i = 1; i <= n; i++)
    {
        cin>> A >> B >> C;
        int D = C - B;
        if(min == -1 || min > (long double)A / D)
        {
            min = (long double)A / D;
            minnomber = i;
        }
    }
    cout<< minnomber;
    return 0;
}

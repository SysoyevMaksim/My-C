#include <iostream>

using namespace std;

int main()
{
    int M, N, K;
    cin>> M >> N >> K;
    for(int i = N; i >= 0; i --)
    {
        if(K >= i * 3 && M >= i * 2)
        {
            cout<< i;
            return 0;
        }
    }
    return 0;
}

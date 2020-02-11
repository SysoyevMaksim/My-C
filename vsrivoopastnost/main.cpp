#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int A = 1, B = 1, C = 1;
    int copA = A, copB = B, copC = C;
    for(int i = 1; i < n; i++)
    {
        A = copB + copC;
        B = copA + copB + copC;
        C = copA + copB + copC;
        copA = A;
        copB = B;
        copC = C;
    }
    cout<< A + B + C;
    return 0;
}

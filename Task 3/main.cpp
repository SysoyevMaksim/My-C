#include <iostream>

using namespace std;

int main()
{
    long double A, B, C;
    int i  = 3;
    cin>> A >> B;
    C = A - B;
    while(C >= 1)
    {
        A = B;
        B = C;
        C = A - B;
        i++;
    }
    cout<< i;
    return 0;
}

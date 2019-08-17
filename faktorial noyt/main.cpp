#include <iostream>

using namespace std;

int main()
{
    int x, faktorial = 1;
    cin>> x;
    for(int i = 1; i <= x; i++)
    {
        faktorial *= i;
    }
    cout<< faktorial;
    return 0;
}

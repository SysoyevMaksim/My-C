#include <iostream>

using namespace std;

int main()
{
    int x, i = 0, stepen = 1;
    cin>> x;
    while(i < x)
    {
        if(stepen >= x)
        {
            cout << i;
            return 0;
        }
        stepen = stepen * 2;
        i++;
    }
    return 0;
}

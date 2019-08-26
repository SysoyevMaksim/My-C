#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d, e, col = 0;
    cin>> a >> b >> c >> d >> e;
    for(int i = 0; i <= 1000; i++)
    {
        if(i-e != 0)
        {
         if((a * i * i * i + b * i * i + c * i + d) / (i - e) == 0)
        {
         col++;
        }
        }
    }
    cout<< col;
    return 0;
}

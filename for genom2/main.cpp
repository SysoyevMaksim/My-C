#include <iostream>

using namespace std;

int main()
{
    unsigned long long x[3], y[3], z[3], x2[3], y2[3], z2[3];
    for(int i = 0; i < 3; i++)
    {
        x[i] = 0;
        y[i] = 0;
        z[i] = 0;
    }
    x[0] = 1;
    y[1] = 1;
    z[2] = 1;
    for(int i = 0; i < 50; i++)
    {
        for(int i = 0; i < 3; i++)
        {
            x2[i] = y[i] + z[i];
            y2[i] = x[i] + z[i];
            z2[i] = y[i] + x[i];
        }
        for(int i = 0; i < 3; i++)
        {
            x[i] = x2[i];
            y[i] = y2[i];
            z[i] = z2[i];
        }
        for(int i = 0; i < 3; i++)
        {
            cout<< x[i] << " ";
        }
        cout<< "    ";
        for(int i = 0; i < 3; i++)
        {
            cout<< y[i] << " ";
        }
        cout<< "    ";
        for(int i = 0; i < 3; i++)
        {
            cout<< z[i] << " ";
        }
        cout<< endl;
    }
    return 0;
}

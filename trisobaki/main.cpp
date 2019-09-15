#include <iostream>
#include <cmath>
#include <iomanip>

#define pi 3.14159265359

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, r12, r23, r13, max1, max2;
    cin>> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    r12 = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
    r23 = sqrt(pow(abs(x2 - x3), 2) + pow(abs(y2 - y3), 2));
    r13 = sqrt(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2));
    max2 = max(r12, r23);
    max1 = max(max2, r13);
    if(max1 != r13)
    {
        max2 = max(r13, min(r12, r23));
    }
    double s1 = pi * pow(max2, 2);
    double s2 = pi * pow(max1 - max2, 2);
    cout<< setprecision(15) << s1 + s2;
    return 0;
}

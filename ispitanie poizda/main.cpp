#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

ifstream cin ("input.txt");
ofstream cout ("output.txt");

long double quadratic_equation(long double a, long double b, long double c)
{
    long double discriminant = b * b - 4 * a * c;
    if(discriminant == 0)
    {
        return b / 2 / a * -1;
    }
    if(discriminant > 0)
    {
        if((b * -1 + sqrt(discriminant)) / 2 / a > 0)
        {
            return (b * -1 + sqrt(discriminant)) / 2 / a;
        }
        else
        {
            return (b * -1 - sqrt(discriminant)) / 2 / a;
        }
    }
}

void not_max(long double L, long double a1, long double a2, long double t3)
{
    ifstream cin ("input.txt");
    ofstream cout ("output.txt");
    long double t1 = quadratic_equation((a1 + a1 * a1 / a2) / 2, a1 * t3, L * -1);
    long double t2 = t1 * (a1 / a2);
    cout << t1 + t2 + t3;
}

int main()
{
    ifstream cin ("input.txt");
    ofstream cout ("output.txt");
    long double a1, a2, L, t3, V;
    cin>> L >> a1 >> a2 >> V >> t3;
    long double t1 = V / a1, t2 = V / a2;
    //cout << t1 << " " << t2 << " " << V * t3 + (a1 * t1 * t1 / 2) + (a2 * t2 * t2 / 2) << " " << (L - (V * t3 + (a1 * t1 * t1 / 2) + (a2 * t2 * t2 / 2))) / V << endl;
    if(V * t3 + (a1 * t1 * t1 / 2) + (a2 * t2 * t2 / 2) == L)
    {
        cout<< t1 + t2 + t3;
    }
    if(V * t3 + (a1 * t1 * t1 / 2) + (a2 * t2 * t2 / 2) < L)
    {
        cout<< (L - (V * t3 + (a1 * t1 * t1 / 2) + (a2 * t2 * t2 / 2))) / V + t1 + t2 + t3;
    }
    if(V * t3 + (a1 * t1 * t1 / 2) + (a2 * t2 * t2 / 2) > L)
    {
        not_max(L, a1, a2, t3);
    }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, x1, x2, y,  y1, y2;
    cin>> x1 >> y1 >> x2 >> y2;
    bool a = (x1 < x2);
    bool b = (y1 < y2);
    x = 2 * a - 1;
    y = 2 * b - 1;
    //cout << x << " " << y << endl;
        for(int i = x1; i != x2 + x; i+= x)
        {
            //cout<< i << " ";
            for(int j = y1; j != y2 + y; j+= y)
             {
                 //cout<< j << endl;
             }
        }
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x1 = "x", x2, y1 = "y", y2, z1 = "z", z2;
    for(int i = 0; i < 10; i++)
    {
        x2.insert(x2.size(), y1);
        x2.insert(x2.size(), "+");
        x2.insert(x2.size(), z1);
        y2.insert(y2.size(), x1);
        y2.insert(y2.size(), "+");
        y2.insert(y2.size(), z1);
        z2.insert(z2.size(), y1);
        z2.insert(z2.size(), "+");
        z2.insert(z2.size(), x1);
        x1 = x2;
        y1 = y2;
        z1 = z2;
        x2 = "";
        y2 = "";
        z2 = "";
        cout<< x1 << " " << y1 << " " << z1 << endl;
    }
    return 0;
}

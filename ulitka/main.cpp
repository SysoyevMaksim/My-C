#include <iostream>

using namespace std;


int main()
{
 int h, v1, v2, h1, t, d;
 cin>> h >> v1 >> v2;
 h1 = (h- v1 + abs(h - v1))/2;
 d = h1%(v1 - v2);
 t = h1/(v1 - v2) + 2 + ((d-1)/(d+1));
 cout<< t;
    return 0;
}

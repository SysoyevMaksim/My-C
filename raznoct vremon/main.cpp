#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h1, m1, s1, h2, m2, s2, h3, m3, s3, m4, s4, s5;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    h3 = h2 - h1;
    m3 = m2 - m1;
    s3 = s2 - s1;
    m4 = h3*60 + m3;
    s4 = m4*60 + s3;
    s5 = abs((double)s4);
    cout<< s5;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    string s;
    int x, y, a = 0, b = 0, c = 0, d = 0, e = 0;
    getline(cin, s);
    for(int i = 0; i <= s.length(); i++)
    {
        if(e = 1 && (s[i] >= a && s[i] <= z))
        {
            continue;
        }
        if(e = 0 && s[i] == 'N')
        {
            a = 1;
            e = 1;
        }
        if(e = 0 && s[i] == 'S')
        {
            b = 1;
            e = 1;
        }
        if(e = 0 && s[i] == 'W')
        {
            c = 1;
            e = 1;
        }
        if(e = 0 && s[i] == 'E')
        {
            d = 1;
            e = 1;
        }
        if(a = 1 && s[i] >= 0)
    }
    return 0;
}

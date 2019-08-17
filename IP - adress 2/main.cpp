#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int kolchisel = 0, kolcifr = 0, x = 0, c = 0, d = 0;
    for(int i = 0; i < s.length();  i++)
    {
        if(s[i] == '.')
        {
            if(kolcifr > 3)
            {
                cout<< 0;
                return 0;
            }
            if(kolcifr == 3)
            {
                for(int y = x; y < x + 3; y++)
                {
                    if(d = 0 && s[y] < 3)
                    {
                        d = 1;
                        continue;
                    }
                    if(s[y] < 6)
                    {
                        continue;
                    }
                    cout<< 0;
                    return 0;
                }
                d = 0;
            }
            kolcifr = 0;
            x = 0;
            continue;
        }
        if(c == 0)
        {
            x = i;
            c = 1;
            kolchisel++;
            kolcifr = 1;
            continue;
        }
        kolcifr++;
    }
    if(kolchisel == 4)
    {
        cout<< 1;
        return 0;
    }
    cout<< 0;
    return 0;
}

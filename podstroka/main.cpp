#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, c;
    int a = 0, kol = 0, y = 0;
    getline(cin, s);
    getline(cin, c);
    for(int i = 0; i <= s.length(); i++)
    {
        for(int x = y; x < c.length(); x++)
        {
            if(a == 0 && s[i] == c[x])
            {
                kol++;
                a = 1;
                y = x + 1;
                break;
            }
            if(kol == s.length())
            {
                cout<< "yes";
                return 0;
            }
            if(s[i] == c[x])
            {
               kol++;
               y = x + 1;
               break;
            }
            kol = 0;
            a = 0;
            y = x;

        }
    }
    cout<< "no";
    return 0;
}

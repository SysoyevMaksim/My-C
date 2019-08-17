#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int kolchisel = 0, kolcifr = 0, x = 0, c = 0, d = 0, e = 0;
    for(int i = 0; i < s.length();  i++)
    {
        if(i == s.length() - 1)
        {
            kolcifr++;
        }
        if(i == s.length() - 1 && c == 0)
        {
            kolchisel++;
        }

        if(s[i] == '.' || i == s.length() - 1)
        {
            c = 0;
            //cout<< kolcifr << endl;
            if(kolcifr > 3)
            {
                cout<< 0;
                return 0;
            }
            if(kolcifr == 3)
            {
                if(s[x] > '2')
                {
                    cout<< 0;
                    return 0;
                }
                if(s[x] == '2')
                {
                    if(s[x + 1] > '5')
                    {
                        cout<< 0;
                        return 0;
                    }
                    if(s[x + 1] == '5')
                    {
                        if(s[x + 2] > '5')
                        {
                            cout<< 0;
                            return 0;
                        }
                    }
                }
                d = 0;
                e = 0;
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
    //cout<< kolchisel << endl;
    if(kolchisel == 4)
    {
        cout<< 1;
        return 0;
    }
    cout<< 0;
    return 0;
}

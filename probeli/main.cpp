#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int kol = 0, c = 0, d = 0, f = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(c == 0 && s[i] == ' ')
        {
            if(s[i + 1] == ' ')
            {
                d = i + 1;
                //kol = 1;
            }
            c = 1;
            continue;
        }
        if(s[i] == ' ')
        {
            kol++;
            continue;
        }
        s.erase(d, kol);
        d = 0;
        kol = 0;
        c = 0;
        i = f;
        f++;
        //cout<< s << endl;
    }
    cout<< s;
    return 0;
}

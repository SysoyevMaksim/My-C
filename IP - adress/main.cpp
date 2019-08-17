#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int c = 0, kol = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '.')
        {
            c = 0;
            continue;
        }
        if(c == 0 && s[i] <= '2')
        {
            c = 1;
            kol++;
            continue;
        }
        if(c == 1 && s[i] <= '5')
        {
            continue;
        }
        cout<< 0;
        return 0;
    }
    if(kol == 4)
    {
        cout<< 1;
        return 0;
    }
    cout<< 0;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int kol = 0, n = 1;
    getline(cin, s);
    for(int i = 0; i < s.length() / 2; i ++)
    {
        if(s[i] != s[s.length() - n])
        {
            cout<< "no";
            return 0;
        }
        n++;
    }
    cout<< "yes";
    return 0;
}

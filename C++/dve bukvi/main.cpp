#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
        for(int x = i + 1; x < s.length(); x++)
        {
            if(s[i] == s[x])
            {
                cout<< s[i];
                return 0;
            }
        }
    }
    return 0;
}

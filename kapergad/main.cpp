#include <iostream>
#include <string>

using namespace std;

int main()
{
    int M = 0, m = 0, sm[10];
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
        sm[i] = s[i] - '0';
    }
    for(int i = 0; i < s.length(); i++)
    {
        for(int j = 0; j < s.length() - 1; j++)
        {
            if(s[j] < s[j+1])
            {
                char a = s[j+1];
                s[j+1] = s[j];
                s[j] = a;
            }
        }
    }
    M = stoi(s);
    for(int i = 0; i < s.length(); i++)
    {
        for(int j = 0; j < s.length() - 1; j++)
        {
            if(s[j] > s[j+1])
            {
                char a = s[j+1];
                s[j+1] = s[j];
                s[j] = a;
            }
        }
    }
    m = stoi(s);
    string s2 = to_string(M - m);
    cout<< string(s.length() - s2.length(), '0').append(s2);
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int kol = 1;
    getline(cin,s);
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            kol++;
        }
    }
    cout<< kol;
    return 0;
}

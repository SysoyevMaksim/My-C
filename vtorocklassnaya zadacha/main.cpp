#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int kol = 0;
    cin>> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '0')
        {
            kol++;
        }
        if(s[i] == '6')
        {
            kol++;
        }
        if(s[i] == '8')
        {
            kol++;
            kol++;
        }
        if(s[i] == '9')
        {
            kol++;
        }
    }
    cout<< kol;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, d;
    int x = 0;
    getline(cin,s);
    int kol = 0, max = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != ' ')
        {
            kol++;
        }
        if(s[i] == ' ')
        {
            if(kol > max)
            {
                //cout<< kol << " ";
                max = kol;
                //cout<< max << " ";
                //cout<< i << " ";
                x = i - max;
            }
            kol = 0;
        }
        if( i + 1 == s.length())
        {
            if(kol > max)
            {
                max = kol;
                x = s.length() - max;
            }
        }
    }
    for(int y = x; y < x + max; y++)
    {
        cout<<s[y];
    }
    cout<<endl;
    cout<< max;
    return 0;
}

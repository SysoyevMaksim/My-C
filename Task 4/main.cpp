#include <iostream>
#include <string>

using namespace std;

bool chek(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] < 'a' || s[i] > 'z')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin>> s;
    if(chek(s) == false)
    {
        cout<< "Not English" << endl;
        return 0;
    }
    int kol = 0;
    for(int i = 0; i < s.length(); i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(s[j] == s[i])
            {
                kol++;
                //cout<< i << " " << j << endl;
            }
        }
    }
    cout<< kol << " times";
    return 0;
}

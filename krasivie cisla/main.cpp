#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void check(string s, int &nomber_of_beauty_nombers)
{
    int flag;
    if(s.length() % 2 == 0)
    {
        flag = 1;
    }
    else
    {
        flag = -1;
    }
    for(int i = 0; i < s.length(); i++)
    {
        if(flag == 1)
        {
            int nomber = s[i] - '0';
            if(nomber % 2 == 1)
            {
                return;
            }
        }
        if(flag == -1)
        {
            int nomber = s[i] - '0';
            if(nomber % 2 == 0)
            {
                return;
            }
        }
        flag *= -1;
    }
    nomber_of_beauty_nombers++;
}

int main()
{
    int k, nomber_of_beauty_nombers = 0;
    cin>> k;
    for(int i = 0; i < k; i++)
    {
        string s;
        cin>> s;
        check(s, nomber_of_beauty_nombers);
    }
    cout<< nomber_of_beauty_nombers;
    return 0;
}

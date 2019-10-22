#include <iostream>
#include <string>

using namespace std;

void kol(string s, int &k, int &i)
{
    i++;
    if((s[i] >= '1') && (s[i] <= '9'))
    {
        k = s[i] - '0';
    }
    else
    {
        i--;
    }
}

int main()
{
    int k = 1, summ = 0;
    string s;
    cin>> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'H')
        {
            kol(s, k, i);
            summ += k;
            //cout<< k << " ";
            k = 1;
        }
        if(s[i] == 'C')
        {
            kol(s, k, i);
            summ += k*12;
            //cout<< k << " ";
            k = 1;
        }
        if(s[i] == 'N')
        {
            kol(s, k, i);
            summ += k*14;
            //cout<< k << " ";
            k = 1;
        }
        if(s[i] == 'O')
        {
            kol(s, k, i);
            summ += k*16;
            //cout<< k << " ";
            k = 1;
        }
        //cout<< summ << endl;
    }
    cout<< summ;
    return 0;
}

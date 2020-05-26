#include <iostream>
#include <string>

using namespace std;

string s1, s2;

bool test(int i, int j)
{
    while(i < s2.length() && j < s1.length())
    {
        if(s2[i] == '?')
        {
            i++;
            j++;
            continue;
        }
        if(s2[i] == '*')
        {
            while((s2[i+1] == '*' || s2[i+1] == '?') && i < s2.length())
            {
                if(s2[i] == '?')
                {
                    if(j+1 < s1.length())
                    {
                        j++;
                    }
                }
                i++;
            }
            if(i == s2.length())
            {
                return true;
            }
            int k = i;
            while(s2[k] != '*' && s2[k] != '?' && k < s2.length() - 1)
            {
                k++;
            }
            if(k == i)
            {
                return true;
            }
            string s3 = s2.substr(i, k - i);
            cout<< s3;
            if(s1.find(s3, j) != string::npos)
            {
                j = s1.find(s3, j);
                while(j != string::npos)
                {
                    //cout<< "HELP";
                    if(test(i, j))
                    {
                        return true;
                    }
                    //cout<< "SUPERMAN";
                    j++;
                    j = s1.find(s3, j);
                }
                return false;
            }
        }
        if(s2[i] != s1[j])
        {
            //cout<< "NO";
            return false;
        }
        i++;
        j++;
    }
    if((j == s1.length() && i < s2.length()) || (j < s1.length() && i == s2.length()))
    {
        //cout<< "NO";
        return false;
    }
    return true;
}

int main()
{
    cin>> s1 >> s2;
    if(test(0, 0))
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }
    return 0;
}

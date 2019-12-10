#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    stringstream ss;
    int K;
    string s;
    ss>> K;
    ss>> s;
    int nach = 0, kol = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != ',' && nach == 0)
        {
            nach = i;
        }
        if(s[i] == ',' && nach != 0)
        {
            if(i - nach == K)
            {
                kol++;
            }
        }
    }
    cout<< kol;
    return 0;
}

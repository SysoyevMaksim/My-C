#include <iostream>
#include <string>

using namespace std;

int main()
{
    int summ = 0;
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
        summ += s[i] - '0';
    }
    if(summ % 3 == 0)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }
    return 0;
}

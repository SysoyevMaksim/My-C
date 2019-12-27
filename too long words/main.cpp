#include <iostream>
#include <string>

using namespace std;

int main()
{
    int k;
    string s;
    cin>> k;
    for(int i = 0; i < k; i++)
    {
        cin>> s;
        if(s.length() > 10)
        {
            cout<< s[0];
            cout<< s.length() - 2;
            cout<< s[s.length() -1] << endl;
        }
        else
        {
            cout<< s << endl;
        }
    }
    return 0;
}

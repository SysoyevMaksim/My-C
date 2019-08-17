#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    char ras;
    int k;
    cin>> k;
    for(int i = 0; i < s.length(); i++)
    {
        ras = s[i];
        ras = (ras * 2 - k) % ras;
        if(ras < 'A')
        {
            ras +=  ('Z' - 'A' + 1);
        }
        cout<< ras;
    }
    return 0;
}

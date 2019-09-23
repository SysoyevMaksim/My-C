#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x = 1, y = 1, k;
    char array[1000] [1000];
    string s;
    cin>> k;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
        array[x] [y] = s[i];
        x++;
        y++;
        if(x == k)
        {
            x = 0;
        }
    }
    return 0;
}

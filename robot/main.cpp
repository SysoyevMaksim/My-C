#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x = 50, y = 50, array[100] [100], kol = 0;
    string s;
    getline(cin, s);
    for(int x1 = 0; x1 < 100; x1++)
    {
        for(int y1 = 0; y1 < 100; y1++)
        {
            array[x1] [y1] = 0;
        }
    }
    array[x] [y] = 1;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'U')
        {
            x--;
            array[x] [y]++;
        }
        if(s[i] == 'D')
        {
            x++;
            array[x] [y]++;
        }
        if(s[i] == 'L')
        {
            y--;
            array[x] [y]++;
        }
        if(s[i] == 'R')
        {
            y++;
            array[x] [y]++;
        }
    }
    for(int x1 = 0; x1 < 100; x1++)
    {
        for(int y1 = 0; y1 < 100; y1++)
        {
            if(array[x1] [y1] > 1)
            {
                kol++;
            }
        }
    }
    cout<< kol;
    return 0;
}

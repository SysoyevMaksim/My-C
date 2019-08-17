#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int tl, x=0, y=0;
    while (cin >> s >> tl)
    {
        cin >> s >> tl;
        if (s == "South") y-=tl;
        else
        if (s == "North") y+=tl;
        else
        if (s == "West") x-=tl;
        else
        if (s == "East") x+=tl;
        s=""; tl=0;
    }
    cout << x << " " << y;
    return 0;
}

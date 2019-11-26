#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int to_int(string s, int a)
{
    string s1;
    s1 = s;
    string s2;
    s2 = s;
    s2[1] = s2[4];
    s2[0] = s2[3];
    int day = (s1[0] - '0') * 10 + (s1[1 - '0']);
    int month = (s2[0] - '0') * 10 + (s2[1 - '0']);
    cout<< day << " " << month << endl;
}

int nomber_of_day(int a, int day, int month)
{

}

int main()
{
    bool array [366];
    for(int i = 0; i < 366; i++)
    {
        array[i] = false;
    }
    int a, k;
    cin>> a >> k;
    for(int i = 0; i < k; i++)
    {
        string s;
        cin>> s;
        array[to_int(s, a)] = true;
    }
    return 0;
}

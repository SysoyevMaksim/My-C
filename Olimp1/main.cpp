#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int nomber_of_day(int a, int day, int month)
{
    int nomber_of_day = 0;
    int array[12];
    //month--;
    array[1] = 31;
    array[10] = 31;
    array[8] = 31;
    array[7] = 31;
    array[5] = 31;
    array[3] = 31;
    array[4] = 30;
    array[6] = 30;
    array[9] = 30;
    array[11] = 30;
    array[0] = 0;
    if(a == 1)
    {
        array[2] = 29;
    }
    else
    {
        array[2] = 28;
    }
    for(int i = 0; i < month; i++)
    {
        nomber_of_day += array[i];
    }
    nomber_of_day += day;
    //cout<< nomber_of_day << endl;
    return nomber_of_day;
}

int to_int(string s, int a)
{
    int day = (s[0] - '0') * 10 + (s[1] - '0');
    int month = (s[3] - '0') * 10 + (s[4] - '0');
    //cout<< day << " " << month << endl;
    return nomber_of_day(a, day, month);
}

int main()
{
    bool array [366];
    for(int i = 0; i < 367; i++)
    {
        array[i] = false;
    }
    int a, k;
    cin>> a >> k;
    for(int i = 0; i < k; i++)
    {
        string s;
        cin>> s;
        //to_int(s, a);
        array[to_int(s, a)] = true;
    }
    int money = 0, gold = 0, nom = 1;
     for(int i = 0; i < 367; i++)
    {
        //cout<<array[i] << " ";
        if(array[i] == true)
        {
            if(nom == 1)
            {
                money += 1000;
            }
            if(nom == 2)
            {
                money += 5000;
            }
            if(nom == 3 || nom == 4)
            {
                money += 3000;
            }
            if(nom == 5)
            {
                gold += 3;
            }
            nom++;
            if(nom > 5)
            {
                nom = 1;
            }
        }
        else
        {
            nom = 1;
        }
    }
    //cout<< endl;
    cout<< money << " " << gold;
    return 0;
}

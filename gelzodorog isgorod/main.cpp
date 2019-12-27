#include <iostream>
#include <string>
#include <fstream>
using namespace std;

ifstream fin ("input.txt");
ofstream fout ("output.txt");

void shifr(int perefery_step, int i, string s, bool perefery)
{
    if(perefery)
    {
        while(i < s.length())
        {
            fout<< s[i];
            i += perefery_step;
        }
    }
    else
    {
        int step = perefery_step - i * 2;
        while(i < s.length())
        {
            fout << s[i];
            i += step;
            step = perefery_step - step;
        }
    }
}

int main()
{
    string s;
    int k;
    getline(fin, s);
    k = stoi(s);
    getline(fin, s);
    int perfery_step = (k-1) * 2;
    shifr(perfery_step, 0, s, true);
    for(int i = 1; i < k - 1; i++)
    {
        shifr(perfery_step, i, s, false);
    }
    shifr(perfery_step, k - 1, s, true);
    return 0;
}

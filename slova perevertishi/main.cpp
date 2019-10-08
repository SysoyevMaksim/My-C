#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int ñheck(string s, int kol, string &array)
{
    string illegal_chars = "HINOSXZ";
    for(int i = 0; i < s.length; i++)
    {
        char c = s[i];
        bool condition = illegal_chars.find(c) != string::npos;
        if (!condition)
        {
            return 0;
        }
    }
    array[kol] = s;
}
int main()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    string s, s1;
    string array[1000];
    int k;
    cin>> k;
    test(k);
    cout<< k;
    for(int i = 0; i < k; i++)
    {
        cin>> s;
        //array[i] = s;
    }
    /*for(int i = 0; i < k; i++)
    {
        cout<< array[i];
    }*/
    return 0;
}

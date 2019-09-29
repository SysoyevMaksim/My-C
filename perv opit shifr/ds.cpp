#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string encode(string s, int pos, int len)
{
    if (pos + len > s.length())
    {
        len = s.length() - pos;
    }
    for (int i = 0; i < len / 2; i++)
    {
        int left = pos + i;
        int right = pos + len - i - 1;

        char c = s[left];
        s[left] = s[right];
        s[right] = c;
    }
    return s;
}

int main()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt");

    string s;
    int k;
    getline(infile, s);
    k = stoi(s);
    getline(infile, s);
        
    for (int i = 0; i < s.length(); i += k)
    {
        s = encode(s, i, k);
    }
    outfile << s;
}
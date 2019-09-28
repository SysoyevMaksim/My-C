#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>

using namespace std;

string shifr(int i, int j, string s)
{
    int a = 0, b = 0;
    //i--;
    //j--;
    for(int c = i; c <= i + ((j - i)/2); c++)
    {
        a = s[c];
        s[c] = s[j - b];
        s[j - b] = a;
        b++;
    }
    return s;
}

int main()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    int k, i;
    string s;
    getline(infile, s);
    istringstream ss(s);
    ss >> k;
    getline(infile, s);
    for(i = 0; i < s.length(); i+= k)
    {
        s = shifr(i, i+k-1, s);
    }
    //cout<< s << " " << i << " " << s.length();
    if(i >= s.length())
    {
        i -= k;
        i++;
        cout<< i << " " << s.length();
        s = shifr(i, s.length() - 1, s);
    }
    outfile << s;
    return 0;
}

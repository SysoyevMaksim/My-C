#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int shifr(int i, int j, string s)
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
        shifr(i, i+k-1, s);
    }
    if(i >= s.length())
    {
        i -= k;
        i++;
        shifr(i, s.length() - 1, s);
    }
    outfile << s;
    return 0;
}

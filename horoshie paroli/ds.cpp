#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int check_psw(string psw)
{
    string illegal_chars = "O0lI1";

    if (psw.length() != 8)
        return 0;
    for (int i = 0; i < psw.length(); i++)
    {
        char c = psw[i];
        bool good = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
        bool bad = illegal_chars.find(c) != string::npos;
        if (!good || bad)
            return 0;
    }
    return 1;
}

int main()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    int n, good = 0;
    string s;

    getline(infile, s);
    istringstream ss(s);
    ss >> n;

    for (int i = 0; i < n; i++)
    {
        getline(infile, s);
        good += check_psw(s);
    }
    outfile << good << " " << n - good;
    return 0;
}

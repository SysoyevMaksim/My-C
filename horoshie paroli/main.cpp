#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    int N, horoshie = 0, plohie = 0, zagl = 0, stroch = 0, cifr = 0;
    string parol;
    getline(infile, parol);
    istringstream kolichestvo(parol);
    kolichestvo>> N;
    for(int j = 0; j < N; j++)
    {
        infile>> parol;
        if(parol.length() == 8)
        {
            for(int i = 0; i < parol.length() + 1; i++)
            {
                if(parol[i] >= 'a' && parol[i] <= 'z' && stroch == 0)
                {
                    stroch = 1;
                }
                if(parol[i] >= 'A' && parol[i] <= 'Z' && zagl == 0)
                {
                    zagl = 1;
                }
                if(parol[i] == '0' || parol[i] == 'O' || parol[i] == 'l' || parol[i] == 'I' || parol[i] == '1')
                {
                    plohie++;
                    stroch = 0;
                    zagl = 0;
                    break;
                }
            }
            if(stroch == 1 && zagl == 1)
            {
                horoshie++;
            }
            else
            {
                plohie++;
            }
            stroch = 0;
            zagl = 0;
        }
    }
    outfile<< horoshie << " " << plohie;
    return 0;
}

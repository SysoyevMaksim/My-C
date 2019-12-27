#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin ("input.txt");
    ofstream cout ("output.txt");
    int K;
    string s;
    getline(cin, s);
    istringstream ss (s);
    ss>> K;
    getline(cin, s);
    int nach = 0, kol = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != ',' && nach == -1)
        {
            nach = i;
        }
        if((s[i] == ',')  && nach != -1)
        {
            if(i - nach == K)
            {
                kol++;
            }
            nach = -1;
        }
        if(i == s.length() - 1 && nach != -1)
        {
            //cout<< "Durak: " << i << " " << nach << " " << i - nach + 1 << " " << s[nach] << " " << s[i] << endl;
            if(i - nach + 1 == K)
            {
                kol++;
               // cout<< "Super durak" << endl;
            }
        }
    }
    cout<< kol;
    return 0;
}

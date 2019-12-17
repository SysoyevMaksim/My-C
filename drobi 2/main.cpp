#include <iostream>
#include <set>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin ("input.txt");
    ofstream cout ("output.txt");
    set <long double> s;
    long long n;
    long double a, b;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        s.insert(a/b);
    }
    cout<< s.size();
    return 0;
}

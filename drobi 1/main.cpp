#include <iostream>
#include <set>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin ("input.txt");
    ofstream cout ("output.txt");
    int N;
    double X;
    cin >> X >> N;
    set <double> s;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j < i; j++)
        {
            if((double)j / i <= X)
            {
                s.insert((double)j / i);
            }
        }
    }
    cout<< s.size();
    return 0;
}

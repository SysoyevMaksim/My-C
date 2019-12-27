#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];

    }
    int max = 0, min = 0;
    cout << max << " " << min;
    return 0;
}

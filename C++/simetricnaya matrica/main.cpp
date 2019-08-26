#include <iostream>

using namespace std;

int main()
{
    int n, a = 2, array [101] [101];
    cin>> n;
    for(int x = 1; x <= n; x++)
    {
        for(int y = 1; y <= n; y++)
        {
            cin>> array [x] [y];
        }
    }
    for(int x = 1; x < n; x++)
    {
        for(int y = a; y <= n; y++)
        {
            //cout<< array [x] [y] << " - " << array [y] [x] << endl;
            if(array [x] [y] != array [y] [x])
            {
                cout<< "no";
                return 0;
            }
        }
        a++;
    }
    cout<< "yes";
    return 0;
}

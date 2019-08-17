#include <iostream>

using namespace std;

int main()
{
    int x, y, M, N;
    cin>> M >> N >> x >> y;
    if(x-1 > 0)
    {
     cout<< x-1 << " " << y << endl;
    }
    if(x+1 <= M)
    {
     cout<< x+1 << " " << y << endl;
    }
    if(y-1 > 0)
    {
     cout<< x << " " << y-1 << endl;
    }
    if(y+1 <= N)
    {
     cout<< x << " " << y+1 << endl;
    }
    return 0;
}

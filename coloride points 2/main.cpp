#include <iostream>
#include <cmath>

using namespace std;

void standart(int x1, int y1, int x2, y2, int N)
{
    int x = abs(x1 - x2);
    int y = abs(y1 - y2);
    if(x > y)
    {
        x = y;
    }
    int z = y - x;
    int array[N];
    int k = x;
    int kpred;
    while(1)
    {
        k_pred = k;

    }
}

int main()
{
    int x1, x2, y1, y2, N;
    cin>> x1 >> y1 >> x2 >> y2 >> N;
    if(x1 == y1 || x2 == y2)
    {
        standart(x1, y1, x2, y2);
    }
    return 0;
}

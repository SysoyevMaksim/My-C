#include <iostream>

using namespace std;

int main()
{
    int x, pred = 0, tek = 1, max = 0;
    cin>> x;
    while(x != 0)
    {
        if(x == pred)
        {
            tek++;
        }



        x = pred;
        cin>> x;
    }
    cout<< max;
    return 0;
}

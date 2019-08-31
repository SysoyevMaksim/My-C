#include <iostream>

using namespace std;

int main()
{
    int x, pred = 0, tek = 1, max = 1;
    cin>> x;
    while(x != 0)
    {
        if(x == pred)
        {
            tek++;
        }

        else
        {
            if(tek > max)
            {
                max = tek;
            }
            tek = 1;
        }
        //.cout<< tek << endl;
        pred = x;
        cin>> x;
    }
    if(tek > max)
    {
        max = tek;
    }
    cout<< max;
    return 0;
}

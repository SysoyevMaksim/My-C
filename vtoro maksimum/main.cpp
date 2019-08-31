#include <iostream>

using namespace std;

int main()
{
    int max, max2, array[1000], x;
    cin>> x;
    max = 0;
    max2 = 0;
    while(x != 0)
    {
        if(x > max)
        {
            max2 = max;
            max = x;
        }
        else
        {
            if(x > max2 && x != max)
            {
                max2 = x;
            }
        }
        //cout<< max << " " << max2 << endl;
        cin>> x;
    }
    cout<< max2;
    return 0;
}

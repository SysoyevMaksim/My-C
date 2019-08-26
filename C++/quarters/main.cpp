#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin>> x1 >> y1 >> x2 >> y2;
    if(x1 == 0 || x2 == 0 || y1 == 0 || y2 == 0)
    {
        cout<< "NO";
    }
    else
    {
        if((x1>0 && x2>0) || (x1<0 && x2<0))
        {
            if((y1>0 && y2>0) || (y1<0 && y2<0))
            {
                cout<< "YES";
            }
            else
            {
                cout<< "NO";
            }
        }
        else
        {
            cout<< "NO";
        }
    }

    return 0;
}

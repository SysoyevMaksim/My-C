#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, N;
    cin>> N;
    for(int i = 1; i <= N; i++)
    {
        int ydar;
        cin>> ydar;
        if(ydar == 0)
        {
            if(a == 0)
            {
                a = i+1;
            }
            else
            {
                if(b == 0)
                {
                    b = i-1;
                }
                else
                {
                    break;
                }
            }
        }
    }
    if(a == 0)
    {
        cout<< -1;
        return 0;
    }
    if(b == 0)
    {
        cout<< -2;
        return 0;
    }
    cout<< b - a + 1;
    return 0;
}

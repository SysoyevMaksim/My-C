#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>> n;
    for(int i = 0; i <= sqrt((double)n); i++)
    {
        for(int x = 0; x <= sqrt((double)n); x++)
        {
            for(int y = 0; y <= sqrt((double)n); y++)
            {
                for(int z = 1; z <= sqrt((double)n); z++)
                {
                    if(i * i + x * x + y * y + z * z == n)
                    {
                        if(i > 0)
                        {
                            cout<< i << " ";
                        }
                        if(x > 0)
                        {
                            cout<< x << " ";
                        }
                        if(y > 0)
                        {
                            cout<< y << " ";
                        }
                        if(z > 0)
                        {
                            cout<< z << " ";
                        }
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}

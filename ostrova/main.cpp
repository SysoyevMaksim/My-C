#include <iostream>

using namespace std;

int main()
{
    int N = 0, now = 0, in_past = 0, kol = -1;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        in_past = now;
        scanf("%d", &now);
        if(in_past >=0 && now < 0)
        {
            kol++;
        }
    }
    if(kol == -1)
    {
        kol = 0;
    }
    cout<< kol;
    return 0;
}

#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    unsigned long long N = 0, kol = 0, n = 0;
    string s;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &n);
        kol+= n;
    }
    kol-= N;
    kol++;
    cout<< kol;
    return 0;
}

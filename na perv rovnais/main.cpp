#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    //string s;
    int perv, sled, kol = 0, N;
    //getline(cin, s);
    //istringstream ss(s);
    //ss>> N;
    //getline(cin, s);
    //istringstream sss(s);
    //sss>> perv;
    scanf("%d", &N);
    scanf("%d", &perv);
    for(int i = 0; i < N-1; i++)
    {
        //sss>> sled;
        scanf("%d", &sled);
        if(sled == perv)
        {
            kol++;
        }
    }
    cout<< kol;
    return 0;
}

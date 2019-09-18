#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, zarplata, zarplatamax = 0;
    string fam, fammax, narod;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> zarplata >> fam >> narod;
        if(narod == "Russia")
        {
            if(zarplata > zarplatamax)
            {
                zarplatamax = zarplata;
                fammax = fam;
            }
        }
    }
    cout<< fammax;
    return 0;
}

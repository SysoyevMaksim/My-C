#include <iostream>

using namespace std;

int main()
{
    int n, m, array [100] [100], posl = 0, n1 = 0, m1 = 0;
    cin>>n >> m;
    for(int i = 0; i < n*m; i++)
    {
        n1 = i / m;
        m1 = i % m;
        //cout<< n1 << " " << m1;
        if(posl != n1)
        {
            cout<< endl;
            posl = n1;
        }
        cout<< n1 * m1 << " ";
    }
    return 0;
}

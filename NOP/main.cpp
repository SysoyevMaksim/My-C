#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream cin ("input.txt");
    ofstream cout ("output.txt");
    int n;
    cin >> n;
    int a[n], dl[n], pr[n];
    for(int i = 0; i < n; i++)
    {
        dl[i] = 1;
        pr[i] = -1;
        cin>> a[i];
    }
    /*for(int i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    cout<< endl;
    for(int i = 0; i < n; i++)
    {
        cout<< dl[i] << " ";
    }*/
    bool b = (a[1] > a[0]);
    //cout<< endl << (a[1] > a[0]) << " " << (dl[1] +) << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[i] > a[j])
            {
                if(dl[j] + 1 > dl[i])
                {
                    dl[i] = dl[j] + 1;
                    pr[i] = j;
                }
            }
        }
    }
    /*for(int i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    cout<< endl;
    for(int i = 0; i < n; i++)
    {
        cout<< dl[i] << " ";
    }
    cout<< endl;
    for(int i = 0; i < n; i++)
    {
        cout<< pr[i] << " ";
    }*/
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = dl[i];
        }
    }
    cout<< max;
    return 0;
}

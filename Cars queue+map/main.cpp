#include<bits/stdc++.h>

using namespace std;

int main()
{
    queue<long long> MyQueue;
    map <long long, int> ma;
    long long sum = 0, kol = 0;
    int k;
    cin>> k;
    for(int i = 0; i < k; i++)
    {
        char n = 'a';
        while(n != '+' && n != '-' && n != '?')cin>> n;
        switch(n)
        {
            case '+' :
            {
                long long m;
                cin>> m;
                MyQueue.push(m);
                kol++;
                sum += m;
                ma.insert({m, 0});
                ma[m]++;
                break;
            }
            case '-' :
            {
                ma[MyQueue.front()]--;
                sum -= MyQueue.front();
                MyQueue.pop();
                kol--;
                break;
            }
            case '?' :
            {
                if((double)sum / kol - sum / kol > 0.00001)
                {
                    cout<< 0 << endl;
                    break;
                }
                ma.insert({sum/kol, 0});
                cout << ma[sum/kol] << endl;
                break;
            }
        }
    }
    return 0;
}

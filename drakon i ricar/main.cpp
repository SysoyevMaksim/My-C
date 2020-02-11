#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>> n;
    vector<int> array(n);
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    sort(array.begin(), array.end());
    int m, maxsum;
    cin>> m;
    for(int i = 0; i < n-2; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            for(int g = 0; g < n; g++)
            {
                int sum = array[i] + array[j] + array[g];
                if(sum < m)
                {
                    if(sum > maxsum)
                    {
                        maxsum = sum;
                    }
                }
                if(sum == m)
                {
                    cout<< m;
                    return 0;
                }
                if(sum > m)
                {
                    cout<< maxsum;
                    return 0;
                }
            }
        }
    }
    cout<< maxsum;
    return 0;
}

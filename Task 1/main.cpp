#include <iostream>

using namespace std;

int main()
{
    int N, A[10000], min = -1, max = -1;
    cin>> N;
    for(int i = 0; i < N; i++)
    {
        cin>> A[i];
        if(min == -1 || min > A[i])
        {
            min = A[i];
        }
        if(max == -1 || max < A[i])
        {
            max = A[i];
        }
    }
    for(int i = 0; i < N; i++)
    {
        if(A[i] != min && A[i] != max)
        {
            cout<< i+1 << " ";
        }
    }
    return 0;
}

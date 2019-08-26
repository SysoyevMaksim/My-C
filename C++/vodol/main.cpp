#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A, a = 0, B, b = 0, N, n = 1, k = 1, steps = 0;
    cin>> A >> B >> N;

    if (N == A)
    {
        cout<< ">A";
        return 0;
    }
    if (N == B)
    {
        cout<< ">B";
        return 0;
    }
    if (N > A && N > B)
    {
        cout<< "Impossible";
        return 0;
    }
    if (A % 2 == 0 && B % 2 == 0 && N % 2 == 1)
    {
        cout<< "Impossible";
        return 0;
    }

    while(n * A - k * B != N)
    {

        if(n * A - k * B < N)
        {
            n++;
        }
        if(n * A - k * B > N)
        {
            k++;
        }
        if(n + k > 100000)
        {
            cout<< "Impossible";
            return 0;
        }
    }
    while(a != N && b != N)
    {
        if((a - (B - b) < 0 && n != 0) || (a == 0 && n != 0))
        {
            cout<< ">A" << endl;
            steps++;
            a = A;
            n = n - 1;
        }
        if((b +(B - b) > B && k != 0) ||( b == B && k != 0))
        {
            cout<< "B>" << endl;
            steps++;
            b = 0;
            k = k - 1;
        }
        if(a - ( B - b) > 0 && b != B)
        {
            cout<< "A>B" << endl;
            steps++;
            a = a - ( B - b) ;
            b = B;

        }
        if(a - (B - b) < 0 && b != B)
        {
            for(int i = (B - b); i > 0; i--)
            {
                if(a - i >= 0 && b + i <= B)
                {
                    cout<< "A>B" << endl;
                    steps++;
                    a = a - i;
                    b = b + i;


                }
            }
        }
        if(steps > 100000)
        {
            cout<< "Impossible";
            return 0;
        }
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin>> a >> b;
    if (a == b)
    {
     cout<< "YES";
    }
    else
    {
     if(a != b && b != 1 && a != 1)
    {
     cout<< "YES";
    }
    else
    {
     cout<< "NO";
    }
    }

    return 0;
}

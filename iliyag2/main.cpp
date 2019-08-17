#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a%400==0)
    {
        cout << "YES";
        return 0;
    }
    if(a%4==0&&a%100!=0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> a;
    a.insert(1);
    if (a.find(1) != a.end())
    {
        cout<< 1;
    }
    return 0;
}

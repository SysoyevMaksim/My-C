#include <iostream>

using namespace std;

int main()
{
    int array[100],n;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    for(int i = 0; i < n; i+= 2)
    {
        cout<< array[i] << " ";
    }
    return 0;
}

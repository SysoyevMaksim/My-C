#include <iostream>

using namespace std;

int main()
{
    long long one = 0, two = 0, three = 0, one2 = 0, two2 = 0, three2 = 0, k;
    string s;
    cin>> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1')
        {
            one++;
        }
        if(s[i] == '2')
        {
            two++;
        }
        if(s[i] == '3')
        {
            three++;
        }
    }
    cin>> k;
    int i = 0;
    for(i = 0; i < k-1; i+= 2)
    {
        one2 = two;
        two2 = one + three;
        three2 = one;
        one = two2;
        two = one2 + three2;
        three = one2;
    }
    if(i < k)
    {
        one2 = two;
        two2 = one + three;
        three2 = one;
        one = one2;
        two = two2;
        three = three2;
    }
    cout<< one  << " " << two << " " << three;
    return 0;
}

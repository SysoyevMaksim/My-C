#include <iostream>

using namespace std;

int main()
{
    int x, a;
    cin>> x;
    a = x % 10;

    if (x == 100)
    {
        cout<< "C";
        return 0;
    }
    else
    {
        if (x >= 90)
        {
            cout<< "XC";
        }
        else
        {
            if (x >= 80)
            {
                cout<< "LXXX";
            }
            else
            {
                if (x >= 70)
                {
                    cout<< "LXX";
                }
                else
                {
                    if (x >= 60)
                    {
                        cout<< "LX";
                    }
                    else
                    {
                        if (x >= 50)
                        {
                            cout<< "L";
                        }
                        else
                        {
                            if (x >= 40)
                            {
                                cout<< "XL";
                            }
                            else
                            {
                                if (x >= 30)
                                {
                                    cout<< "XXX";
                                }
                                else
                                {
                                    if (x >= 20)
                                    {
                                        cout<< "XX";
                                    }
                                    else
                                    {
                                        if (x >= 10)
                                        {
                                            cout<< "X";
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (a == 9)
        {
            cout<< "IX";
        }
        else
        {
            if (a == 8)
            {
                cout<< "VIII";
            }
            else
            {
                if (a == 7)
                {
                    cout<< "VII";
                }
                else
                {
                    if (a == 6)
                    {
                        cout<< "VI";
                    }
                    else
                    {
                        if (a == 5)
                        {
                            cout<< "V";
                        }
                        else
                        {
                            if (a == 4)
                            {
                                cout<< "IV";
                            }
                            else
                            {
                                if (a == 3)
                                {
                                    cout<< "III";
                                }
                                else
                                {
                                    if (a == 2)
                                    {
                                        cout<< "II";
                                    }
                                    else
                                    {
                                        if (a == 1)
                                        {
                                            cout<< "I";
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

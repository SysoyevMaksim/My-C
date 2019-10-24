#include <iostream>

using namespace std;

//int minus(int ticket, int first_three, int last_three)
//{
  //  while(first_three !=)
    //
//}

int main()
{
    int ticket, first_three, last_three, super_nomber;
    cin >> ticket;
    first_three = ticket / 1000;
    last_three = ticket % 1000;
    cout<< first_three;
    if(first_three == last_three)
        cout<< ticket;
    return 0;
}

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    queue<int> myQueue;
    int k;
    cin>> k;
    for(int i = 0; i < k; i++)
    {
        string s;
        cin>> s;
        if(s == "+")
        {
            int n;
            cin>> n;
            myQueue.push(n);
        }
        if(s == "-")
        {
            myQueue.pop();
        }
        if(s == "?")
        {
            queue<int> myQueue2;
            int summ = 0, nomber = 0, nomber_of_cars = 0;
            while(!myQueue.empty())
            {
                //cout << myQueue.front() << " ";
                summ+= myQueue.front();
                myQueue2.push(myQueue.front());
                myQueue.pop();
                nomber++;
            }
            //cout<< summ << " " << nomber << " ";
            double math = (double)summ/nomber;
            //cout<< math << " ";
            while(!myQueue2.empty())
            {
                if(myQueue2.front() == math)
                {
                    nomber_of_cars++;
                }
                myQueue.push(myQueue2.front());
                myQueue2.pop();
            }
            cout<< nomber_of_cars << endl;
        }
    }
    return 0;
}

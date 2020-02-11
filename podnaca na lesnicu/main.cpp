#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin ("input.txt");
    ofstream cout ("output.txt");
    int N, K, S, kolmin = 0, kolmax = 0, pos1 = 0, pos2 = 0;
    cin >> N >> K >> S;
    int array [N+1];
    for(int i = 0; i <= N+1; i++)
    {
        array[i] = 0;
    }
    for(int i = 0; i < K; i++)
    {
        int w;
        cin>> w;
        array[w] = 1;
    }
    while(pos1 < N)
    {
        for(int i = 1; i <= S; i++)
        {
            if(pos1+i > N || array[pos1+i] == 0)
            {
                pos1+= i;
                kolmin++;
                break;
            }
        }
    }
     while(pos2 < N)
    {
        for(int i = S; i >= 1; i--)
        {
            if(pos2+i > N || array[pos2+i] == 0)
            {
                pos2+= i;
                kolmax++;
                break;
            }
        }
    }
    /*kolmax ++;
    kolmin ++;
    if(pos1 >= N)
    {
        kolmin--;
    }
    if(pos2 >= N)
    {
        kolmax--;
    }*/
    cout<< kolmax << " " << kolmin;
    return 0;
}

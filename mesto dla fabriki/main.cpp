#include <iostream>
#include <fstream>

using namespace std;

int s1[1000000];
int s2[1000000];
int s3[1000000];

int main()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    int N, M, min = -1, summ = 0;
    infile>> M >> N;
    for(int i = 0; i < M; i++)
    {
        int nomer = i % 3;
        if(nomer == 0)
        {
            for(int i = 0; i < N; i++)
            {
                infile>> s1[i];
            }
        }
        if(nomer == 1)
        {
            for(int i = 0; i < N; i++)
            {
                infile>> s2[i];
            }
        }
        if(nomer == 2)
        {
            for(int i = 0; i < N; i++)
            {
                infile>> s3[i];
            }
        }
        if(i < 2)
        {
            continue;
        }
        for(int nachalo = 0; nachalo < N - 2; nachalo++)
        {
            for(int stolbec = nachalo; stolbec < nachalo + 3; stolbec++)
            {
                summ+= (s1[stolbec] + s2[stolbec] + s3[stolbec]);
            }
            if(min == -1 || min > summ)
            {
                min = summ;
            }
            summ = 0;
        }
    }
    outfile<< min;
    /*for(int i = 0; i < N; i++)
    {
        outfile<< s1[i];
    }
    outfile<< endl;
    for(int i = 0; i < N; i++)
    {
        outfile<< s2[i];
    }
    outfile<< endl;
    for(int i = 0; i < N; i++)
    {
        outfile<< s3[i];
    }*/
    return 0;
}

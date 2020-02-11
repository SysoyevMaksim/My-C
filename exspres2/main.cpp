#include <iostream>

using namespace std;

int main()
{
    int array[51];
    array[1] = 1;
    array[2] = 2;
    array[3] = 4;
    array[4] = 7;
    array[5] = 10;
    array[6] = 15;
    array[7] = 22;
    array[8] = 32;
    int step = 7, step_step = 3;
    for(int i = 8; i < 51; i ++)
    {
        step += step_step;
        array[i] = array[i-1] + step;
        cout<< i << ": " << array[i] << " step: " << step << endl;
        i++;
        step += step_step;
        array[i] = array[i-1] + step;
        cout<< i << ": " << array[i] << "  step: "<< step << endl;
        step_step++;
    }
    //int k;
    //cin>> k;
    //cout<< array[k];
    for(int i = 1; i <11; i++)
    {
        cout<< i << ": " << array[i] << endl;
    }
    return 0;
}

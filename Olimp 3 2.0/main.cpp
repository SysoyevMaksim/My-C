#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A;
    char b;
    cin>> A;
    cin>> b;
    int length = A.length();
    int N;
    cin>> N;
    int copy_length = length;
    while (N > copy_length) {
        copy_length = 2 * copy_length + 1;
    }
    int i;
    while (copy_length > length){
        if(N != copy_length){
            i = copy_length / 2;
            if(N > i) N -= i;
        }
        else{
            cout<< b;
            return 0;
        }
        copy_length = copy_length / 2;
    }
    cout<< A[N-1];
    return 0;
}

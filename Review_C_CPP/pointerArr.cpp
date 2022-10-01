#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

    int *p;
    p=(int *)malloc(5*sizeof(5));
    p[0] = -1, p[1] = 1, p[2] = 2, p[3] = 3;

    for(int i = 0; i< 5; i++){
        cout << p[i] << endl;
    }

    // release memory c++
    // delete [] p;
    // c 
    free(p);
    return 0;   
}
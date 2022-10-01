#include <iostream>
using namespace std;

struct Rec {
    int v;
    int b;
};

int main(){
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rec *pr;
    // pointer size is 8 
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(pr) << endl;

}
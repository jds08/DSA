#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;
    cout << a << endl;
    cout << "address of a: "  << &a << endl;
    cout << "address of a: " <<  &(*p) << endl;

    cout << "value of a: " << a << endl;
    cout << "value of a: " << *p << endl;

    int *hp;
    // hp = new int[5]
    hp = (int *)malloc(5*sizeof(int));
    

    return 0;
}
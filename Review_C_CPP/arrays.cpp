#include <iostream>
using namespace std;
int main(){
    // Declaring an array
    int a[5];

    // Declaration and Initialization
    int b[3] = {1, 2, 3};

    // Looping through an array
    for( int i = 0; i < 3; i++){
        printf("%d\n", b[i]);
    }

    // size of int
    cout << sizeof(a[1]) << endl;

    // for each loop 
    for (int x: a){
        cout << x << endl;
    }

    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int c[n];
    c[0] = 9;


    return 0;
}
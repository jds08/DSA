#include <iostream>
using namespace std;
int main(){
    int a = 10;
    // 'r' is another name for 'a'.
    int &r = a;
    cout << a << endl;
    cout << r << endl;

    

    return 0;
}
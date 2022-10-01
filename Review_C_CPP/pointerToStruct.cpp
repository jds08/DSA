#include <iostream> 
using namespace std;

struct Rec{
    int length;
    int width;
};
int main(){
    struct Rec r={2,3};
    struct Rec *pr= &r;
    r.length = 15;
    //(*pr).length;
    pr -> width = 20;
    cout << r.length  << r.width << endl;
    return 0;
}
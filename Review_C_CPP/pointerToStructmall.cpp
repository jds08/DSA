#include <iostream> 
using namespace std;

struct Rec{
    int length;
    int width;
};
int main(){
    struct Rec *pr;
    pr = (struct Rec *)malloc(sizeof(struct Rec));
    pr -> length = 20;
    pr -> width = 10;
    cout << pr->length <<endl <<  pr -> width << endl;
    free(pr);
    return 0;
}
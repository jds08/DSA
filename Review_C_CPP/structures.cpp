#include <iostream>
using namespace std;

struct complexNumber{
    int real;
    int img;
};

struct card{
    int face;
    int shape;
    string color;
};

struct student {
    string name;
    int graduationYear;
};

struct Rec{
    int length;
    int width;
};

int main(){
    struct Rec r;
    cout << sizeof(r);
    r.length = 5;
    r.width = 3;
    printf("Size of r: %d%d",r.length, r.width);
    
    cout << endl;
    struct student s;
    s.graduationYear = 2025;
    s.name = "Jack";
    cout << s.graduationYear << endl;
    cout << s.name << endl;

    cout << endl;

    struct card b ={1,2};
    printf("%d", b.face);
    printf("%d", b.shape);
    return 0;
}
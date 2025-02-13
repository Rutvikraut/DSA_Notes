#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initValues(struct Rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;
}

void area(struct Rectangle r){
    cout<<"Area of rectangle is : "<<r.length*r.breadth<<endl;
}

void changeLength(struct Rectangle *r,int l){
    r->length=l;
}

int main()
{
    Rectangle r;
    initValues(&r,10,5);
    //After Initialization
    area(r);
    changeLength(&r,20);
    //After Changing Length
    area(r);
    return 0;
}
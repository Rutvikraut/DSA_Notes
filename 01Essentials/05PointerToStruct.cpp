#include <iostream>
#include <stdio.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};

int main(){
    Rectangle r={10,5};
    cout<<r.length<<endl;
    Rectangle *ptr=&r;             // Static pointer allocation
    // cout<<"Using pointer "<<p->length<<endl;
    cout<<"Using Static Pointer"<<endl;
    cout<<"Length : "<<ptr->length<<endl;
    cout<<"Breadth : "<<ptr->breadth<<endl;
    // Rectangle *p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // C language

    Rectangle *p = new Rectangle;
    p->length=25;
    p->breadth=10;
    cout<<"Using dynamic memory allocation : "<<p->length<<" "<<p->breadth<<endl;
    return 0;
}
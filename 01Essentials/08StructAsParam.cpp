#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int calArea(struct Rectangle r1){
    return r1.length*r1.breadth;
};

void changeValues(struct Rectangle &r2){
    r2.length=20;
    r2.breadth=10;
}

void changingByAddress(struct Rectangle *r3){
    r3->length=50;
    r3->breadth=90;
}
int main()
{
    struct Rectangle r={10,5};

    // We can pass whole structure as parameter itself instead of separate length and breadth

    cout<<"Calculating area using pass by value : "<<calArea(r)<<endl;
    cout<<"Changing values using call by reference..."<<endl;
    changeValues(r);

    cout<<"After the changing the values using Reference : "<<endl;
    cout<<"Length : "<<r.length<<" "<<"Breadth : "<<r.breadth<<endl;

    cout<<"Changing the values using call by address..."<<endl;
    changingByAddress(&r);
    cout<<"After changing the values using call by address"<<endl;
    cout<<"Length : "<<r.length<<" Breadth : "<<r.breadth<<endl;
    return 0;
}
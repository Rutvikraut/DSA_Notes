#include <iostream>
using namespace std;

int main(){
    int a=10;
    int &r=a; // references must be initialized
    cout<<"Value of a : "<<a<<endl<<"Value of r : "<<r<<endl; //10 10
    cout<<&a<<endl<<&r; // same address
    cout<<"\n---------------"<<endl;
    a=25;
    cout<<a<<endl<<r<<endl;

    int b=30;
    r=b; // here b's value which is 30 assigned to r but r is a so the a's value become 30 
    cout<<a<<endl<<r<<endl<<b;
    return 0;
}
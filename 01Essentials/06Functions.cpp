// function is a group of related instructions which perform a specific task
// Monolithic Programming - All code in one function
// Modular or Procedural Programming - Breaking down lines of code in small functions

#include <iostream>
#include <stdio.h>
using namespace std;
// Call by value

void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

void swap1(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void swap2(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10;
    int b=5;
    swap(a,b);
    cout<<"Using Call by value "<<a<<" "<<b<<endl;
    swap1(&a,&b);
    cout<<"Using Call by address "<<a<<" "<<b<<endl;
    swap2(a,b);
    cout<<"Using Call by references "<<a<<" "<<b<<endl; // only in c++

    return 0;
}
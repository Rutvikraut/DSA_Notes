#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int a=10; // a declared and initialized
    int *p; // pointer declaration
    p=&a; // stores address of a
    cout<<"Value of a : "<<a<<endl; // prints value of a
    cout<<"Address of a : "<<&a<<endl; // prints address of a
    cout<<"Address of p : "<<&p<<endl; // prints address of p
    cout<<"Value of p : "<<p<<endl; // print addres stored in p
    cout<<"Value of *p : "<<*p<<endl; // print value at the address stored in p

    // Allocating memory in heap

    int *ptr;
    // ptr = malloc(5*sizeof(int)); // malloc in c language and it return void pointer
    // ptr = (int *)malloc(5*sizeof(int)); // typecasting
    ptr = new int[5]; // in c++

    //Pointer to array

    int A[5]={2,4,5,6,7};
    int *ptr2;
    ptr2 = A; // don't use & ampersand when initializing pointer to an array
    
    cout<<"Printing array without pointer : ";
    for(int x:A){
        cout<<x<<" ";
    }

    cout<<"\nPrinting array using pointer : ";
    for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
        cout<<ptr2[i]<<" ";
    }

    // Initializing array in heap
    int *ptr3 = new int[3];
    
    ptr3[0]=10;
    ptr3[1]=20;
    ptr3[2]=30;

    cout<<"\nArray initialized in heap and accessing using pointer : ";
    for(int i=0;i<=sizeof(ptr3)/sizeof(ptr3[0]);i++){
        cout<<ptr3[i]<<" ";
    }

    delete p;
    delete []ptr;
    delete []ptr3; 
    return 0;
}
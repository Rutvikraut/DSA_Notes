#include <iostream>
using namespace std;
void changeArrayValues(int A[],int n){
    for(int i=0;i<n;i++)
    {
        A[i]=A[i]*2;
    }
}

int* fun(int n)
{
    int *p;
    p=new int[n];
    for(int j=0;j<5;j++)
    {
        p[j]=j;
    }
    return p;
}

void getSize(int C[]){
    cout<<"Size of C in getSize function is : "<<sizeof(C)<<endl;

    //When you pass an array to a function, it decays into a pointer to its first element. This means the parameter int C[] in getSize(int C[]) is actually treated as int* C, meaning C is a pointer.

    //The sizeof(C) inside getSize(int C[]) computes the size of the pointer (not the actual array).

    //On a 64-bit system, a pointer typically occupies **8 bytes

    // Below for each code will give error because we cannot use for each on pointer as C is not array it is pointer to an array 

    // for(int x:C){
    //     cout<<x<<endl;
    // }
}
int main()
{
    int A[5];
    int n=5;
    for (int i=0;i<n;i++)
    {
        A[i]=i+1;
    }
    cout<<"Before changing : ";
    for(int x:A){
        cout<<x<<" ";
    }
    cout<<endl;

    changeArrayValues(A,n);
    cout<<"After changing : ";
    for(int x:A){
        cout<<x<<" ";
    }
    cout<<endl;

    int *Arr;
    Arr=fun(5);
    cout<<"Returning Array : ";
    for(int i=0;i<5;i++)
    {
        cout<<Arr[i]<<" ";
    }

    int C[]={6,8,7,9};
    cout<<"\nSize of Array C in main function : "<<sizeof(C)<<endl;
    getSize(C);

    return 0;
}
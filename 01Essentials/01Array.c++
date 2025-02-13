#include <iostream>
using namespace std;

int main(){
    int A[5];     // Garbage Values
    A[0]=20;
    A[1]=20;
    A[2]=20;

    int B[8]={2,4,6,8,10};
    // cout<<A[4]; // Garbage values

    cout<<"Size of A is : "<<sizeof(A)<<endl;
    // for(int i=0;i<8;i++){
    //     cout<<B[i]<<endl;  //accessing the elemtents
    // }

    //using for each loop

    for(int x:B){
        cout<<x<<endl;
    }
    cout<<"Elements of Array A --------- > "<<endl;
    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;  //accessing the elemtents
    }
    return 0;
}
#include<iostream>

using namespace std;

struct Test{
    int A[5];
    int n;
};

void func(struct Test t1){
    t1.A[0]=10;
    t1.A[2]=50;
}

int main(){
    struct Test t = {{2,4,5,6,7},5};
    cout<<"Before calling function..."<<endl;
    for(int x:t.A){
        cout<<x<<" ";
    }

    func(t);

    // As array can only be pass by address but by using struct we can pass it by value. So after calling the function their will be no change in original array.
    cout<<"\nAfter calling function..."<<endl;
    for(int x:t.A){
        cout<<x<<" ";
    }
    return 0;
}
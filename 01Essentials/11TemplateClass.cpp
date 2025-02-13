#include <iostream>
using namespace std;

template <class T> 
class Arithmetic
{
    T a,b;
    public:
    Arithmetic(T a,T b);
    T add();
    T sub();
};

template <class T>
Arithmetic <T>::Arithmetic(T a,T b){
    this->a=a;
    this->b=b;
}
template <class T>
T Arithmetic<T>::add(){
    T c;
    c=a+b;
    return c;
}
template <class T>
T Arithmetic <T>::sub(){
    T d;
    d=a-b;
    return d;
}


int main(){
    Arithmetic<int> a(10,5);
    cout<<"Addition : "<<a.add()<<endl;
    cout<<"Substraction : "<<a.sub()<<endl;

    Arithmetic<float> a1(10.3,5.5);
    cout<<"Addition : "<<a1.add()<<endl;
    cout<<"Substraction : "<<a1.sub()<<endl;

    return 0;
}
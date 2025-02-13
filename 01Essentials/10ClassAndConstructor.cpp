#include <iostream>

using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l,int b){
        this->length=l;
        this->breadth=b;
    };
    int area()
    {
        return this->length*this->breadth;
    }

    void changeLength(int l){
        this->length=l;
    }
};

int main(){
    Rectangle r(10,5);
    cout<<r.area();
    return 0;
}
#include <iostream>
#include <stdio.h>
using namespace std;

// struct Student{
//     char name[10];
//     int rollno;
//     char div[1];
// };

// int main(){
//     // struct Student s; // only declaration
//     struct Student s={"rutvik",10,'A'}; // declaration and initialization
//     printf("%lu\n",sizeof(s)); // datatype is unsigned long
//     cout<<s.name<<endl; // accessing the member of struct using dot operator
//     return 0;
// }

struct Rectangle{
    int length;
    int breadth;
};//r1,r2; // we can declare variable along with definition which will be global

// struct Rectangle r1; 
// -- we can declare varible outside main function. This variable accessible to all the function in program

int main(){
    struct Rectangle r;
    r.length = 20;
    r.breadth = 10;
    return 0;
}
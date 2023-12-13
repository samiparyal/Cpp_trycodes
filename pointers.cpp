#include<iostream>
using namespace std;
int main(){
    //pointer = a data type ; which holds the address of other data types
    int a=3;
    int* b = &a; // int* = a pointer which points to a integer (naming it 'b')
    // '&' is "address of" operator 
    cout<<"The addres of a is"<<b<<endl;
    cout<<"The addres of a is"<<&a<<endl;

     // '*' derefrence operator // "value at" operator
    cout<<"The value at address b is "<<*b<<endl;


    int **c=&b;
    cout<<"address of pointer b"<<c<<endl;
    cout<<"value at b "<<**c;


    return 0;
}
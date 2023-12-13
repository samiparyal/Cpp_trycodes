#include<iostream>
using namespace std;
int main(){
    //new operator
    int *p = new int(4);
    cout<<"The value at p is "<<*p<<endl;

    float *x = new float(5.55);
    cout<<*x;


    int *arr = new int[3];
    arr[0]=10;
    *(arr+1)=20;
    arr[2]=30;
    
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;


    int *a = new int[10];
    a[9]=10;
    cout<<a[9];
    delete[] arr;
    //delete operator

    int* x = new int[0];
    return 0;
}
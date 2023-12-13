#include<iostream>
using namespace std;

int c=45; //global 

int main(){
    int a, b, c;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c;
    return 0;
}
#include<iostream>
using namespace std;
int main(){

    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<(int)b;
    int c = float(b);
    cout<<endl<<c;
    cout<<"int+float="<<a+b;

return 0;
}
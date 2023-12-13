#include<iostream>
using namespace std;
int main(){

    float x=555;
    float &y = x;  // y is reference variable (x is original variable)
    //address of y=x
    cout<<x<<endl<<y;


}
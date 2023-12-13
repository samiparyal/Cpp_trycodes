#include<iostream>
using namespace std;

int c=45; //global 

int main(){

    float d=34.4f;
    long double e=34.4; 
    cout<<"The size of float is "<<sizeof(34.4f)<<endl;
    cout<<"The size of long double is "<<sizeof(e)<<endl;
    cout<<"The size of double is "<<sizeof(34.4)<<endl;
    return 0;
}
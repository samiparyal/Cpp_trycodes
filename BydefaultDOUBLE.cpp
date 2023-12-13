#include<iostream>
using namespace std;

int c=45; //global 

int main(){

    float d=34.4f; //(read below and then this) so we are specifying 'f' at last to consider this value as floating point value
    long double e=34.4; //cpp compiler here, recognizes this decimal values as double by default 
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    return 0;
}
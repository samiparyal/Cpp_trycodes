#include<iostream>
using namespace std;
int main(){
    //pointers+arrays
    int marks[4]={1,2,3,4};
    cout<<marks[0];
    cout<<marks[1];
    cout<<marks[2];
    int* p=marks; // '&' isn't needed here!
    
    cout<<endl<<"The value of marks[0] is "<<*p;
    cout<<endl<<*(++p);
    cout<<endl<<"The value of marks[1] is "<<*(p+1);
    cout<<endl<<"The value of marks[2] is "<<*(p+2);
    
    
    
    // int i=3;
   

    // marks[3]=5;

    // do
    // {
    //     cout<<endl<<"The value of "<<i<<"is "<<marks[i];
    //     i--;
    // }while(i!=0);
    return 0;
}
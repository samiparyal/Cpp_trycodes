#include<iostream>
using namespace std;
int main(){
    int age;
    try{
        cout<<endl<<"Give me your age: ";
        cin>>age;
        if(age<=0)
            throw "Enter a valid age lol";
        cout<<endl<<"Age: "<<age<<endl<<endl;
    }
    catch(const char * a)
    {
        cout<<"Error Detected: "<<a<<endl;
    }
    return 0;
}
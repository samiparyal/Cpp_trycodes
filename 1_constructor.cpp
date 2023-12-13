#include<iostream>
#include<conio.h>
using namespace std;
class constro{
    public:
    int a=1;
    constro(){};
    void display(){
        cout<<a;
    };
    ~constro(){
        cout<<"constructor destroyed!";
    }
};
class temp{
    public:
    temp(constro &o){
        int x=o.a;
        cout<<x;
        o.display();
    }
    ~temp(){
        cout<<"constructor destroyed!";
    }
};
int main(){
    constro n2;
    n2.display();
    cout<<endl;
    temp n1(n2);
    cout<<endl;
    getch();
}




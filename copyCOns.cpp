#include<iostream>
using namespace std;

class Num{
    int a;
    public:
        Num(){} //need to make default cons when there's no input
        Num(int num){
            a=num;
        }
        // Num(Num &obj){
        //     cout<<"Copy Cons Called";
        //     a=obj.a;
        // }

        Num(Num &obj){
            obj.a;
            cout<<"Copy Cons Called";
        }
        void display(){
            cout<<endl<<a<<endl;
        }
};
int main(){
    Num x,y,z;
    x=2;
    y=3;
    z=4;
    x.display();
    y.display();
    z.display();

    Num z1(x);
    return 0;
}
#include<iostream>
using namespace std;

class complex
{
    private: 
        int real, img;
    public:
        complex(){real=0; img=0;}; //needed default con due to res there
        complex(int r, int i){
            real=r;
            img=i;
        }
        complex operator + (complex const &obj){
            complex res; //cannot create res without any arguments because no such constructors exist. 
            res.img= img+obj.img;
            res.real=real+obj.real;
         }
        void display(){
            cout<< real <<" + i"<<img<<endl;
        }
};

int main(){
    complex c1(1,2);
    complex c2(3,5);
    complex c3=c1+c2;
    c3.display();
    return 0;
}
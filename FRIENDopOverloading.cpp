#include<iostream>
using namespace std;
class complex{
    private: 
        int real, img;
    public:
        complex(){real=0; img=0;}
        complex(int r, int i){
            real=r; img=i;
        }
        void show(){cout<<"Ans: "<<real<<" + "<<img<<"i";}
        friend complex operator +(complex x, complex y){
            return complex ((x.real+y.real),(x.img+y.img));
          }
};

int main()
{
    complex c1(1,2);
    complex c2(4,6);
    complex c3;
    c3=c1+c2; 
    c3.show();
}
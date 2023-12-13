//operator overloading
#include<iostream>
using namespace std;
class Complex{
    private: 
        int real, img;    
    public:
        Complex(){real=0; img=0;}
        Complex(int r, int i){
            real=r;
            img=i;
        }
        void print(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
        friend Complex operator +(Complex x, Complex y) //special function
        {
            return Complex ((x.real+y.real), (x.img+y.img));
        }
};

int main()
{
    Complex c1(5,4);
    Complex c2(2,6);
    Complex c3;
    c3=c1+c2; //we'll get answer in complex object as well i.e. 
    c3.print();
    return 0;
}

#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    void setData(int x, int y){
        a = x;
        b = y;
    }

    void setDataBySum(complex o1, complex o2){
        a = o1.a+o2.a;
        b = o1.b+o2.b;
    }
    void printNum(){
        cout<<endl<<"Your complex no. is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex c1, c2, c3;
    int real, img;

    cout<<endl<<"For first complex: "<<endl;
    cout<<"Enter the real part: "<<endl;
    cin>>real;
    cout<<"Enter the Imaginary part: "<<endl;
    cin>>img;
    c1.setData(real,img);

    cout<<endl<<"For second complex: "<<endl;
    cout<<"Enter the real part: "<<endl;
    cin>>real;
    cout<<"Enter the Imaginary part: "<<endl;
    cin>>img;
    c2.setData(3,4);

    c3.setDataBySum(c1,c2);
    c3.printNum();
    return 0;
}
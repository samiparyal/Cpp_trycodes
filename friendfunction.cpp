#include<iostream>
using namespace std;
class Complex;
class Calculator{
    public:
        int add(int a, int b)
        {
            return (a+b);
        }
        int sumRealComplex(Complex, Complex);
        int sumComComplex(Complex, Complex);
};
class Complex{
    int a, b;
    friend int Calculator :: sumRealComplex(Complex, Complex);
    friend int Calculator :: sumComComplex(Complex, Complex);
   
    public: 
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return(o1.a+o2.a);
}
int Calculator :: sumComComplex(Complex o1, Complex o2){
    return(o1.b+o2.b);
}
int main(){
    Complex o1, o2;
    o1.setNumber(1,2);
    o2.setNumber(3,4);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout<<"Sum of real part "<<res<<endl;
    int resc = calc.sumComComplex(o1, o2);
    cout<<"Sum of Complex part "<<resc;
    return 0;
}
// class Complex;
// class Real{
//     int a, a1;
//     public:
//     void getavalue(int x, int x1)
//     {
//         a=x;
//         a1=x1;
//     }
//     friend void add(Real o1, Complex o2);
// };
// class Complex{
//     int b, b1;
//     public:
//     void getbvalue(int y, int y1)
//     {
//         b=y;
//         b1=y1;
//     }
//     friend void add(Real o1, Complex o2);
// };
// void add(Real o1, Complex o2){
//     int realadd, compadd;
//     realadd=o1.a+o1.a1;
//     compadd=o2.b+o2.b1;
//     cout<<endl<<"Complex is "<<realadd<<" + "<<compadd<<"i";
// }
// int main()
// {
//     Real obj1;
//     Complex obj2;
//     obj1.getavalue(1,2);
//     obj2.getbvalue(3,4);
//     add(obj1, obj2);
//     return 0;

// }
// class Complex{
//     int a;
//     int b;
//     public:
//     void setNumber(int x, int y){
//         a = x;
//         b = y;
//     }
//     void printNumber(){
//         cout<<"Your complex no. is "<<a<<"+"<<b<<"i"<<endl;
//     }
//     friend Complex sumComplex(Complex o1, Complex o2); //function decleared as friend here
// };

// Complex sumComplex(Complex o1, Complex o2){
//     Complex o3;
//     o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
//     return o3;
// }

// int main(){
//     Complex c1, c2, sum;
//     int real, img;

//     c1.setNumber(1,2);
//     c1.printNumber();
//     c2.setNumber(3,4);
//     c2.printNumber();

//     sum = sumComplex(c1, c2); // sum is a arbitary object of class complex (can be of any)
//     sum.printNumber();  
//     return 0;
// }

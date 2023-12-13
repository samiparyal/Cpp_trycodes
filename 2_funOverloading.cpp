#include<iostream>
using namespace std;
class samz
{
    public: 
        void fun()
        {
            cout<<"no arg fun"<<endl;
        }
        void fun(int x)
        {
            cout<<"with int arg"<<endl;
        }
        void fun(double x)
        {
            cout<<"with double arg"<<endl;
        }
};
int main(){
    samz obj;
    obj.fun();
    obj.fun(2);
    obj.fun(2.2);
}
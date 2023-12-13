#include<iostream>
using namespace std;
class base{
    public:
    void virtual show()=0;
    void demo(){
        cout<<"Demo function called from base class"<<endl;
    }
};
class derived:public base{
    void show(){
        cout<<"Show function called from derived class"<<endl;
    }
    void demo(){
        cout<<"Demo function called from derived class"<<endl;
    }
};
int main(){
    base *b= new derived;
    b->show();
    b->demo();
}
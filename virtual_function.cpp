#include<iostream>
using namespace std;
class Base{
    public:
    void show(){
        cout<<"base class show func called!"<<endl;
    }
    virtual void print(){
        cout<<"base class print func called!"<<endl;
    }
};
class Derived: public Base{
    public:
    void show(){
        cout<<"derived class show func called!"<<endl;
    }
    void print(){
        cout<<"derived class print func called!"<<endl;
    }
};
int main(){
    Base *baseptr;
    Derived derivedobj;
    baseptr=&derivedobj;

    baseptr->print();
    baseptr->show();
    return 0;
}
#include<iostream>
using namespace std;
class demo{
    private:
        int x;
    public:
    demo(int a){
        x=a;
    }
    void show(){
        cout<<x;
    }
    friend demo operator ++(demo &o); //object is modifies and modified object is to be returned so &o
};
demo operator ++(demo &o){
    o.x+=2;
    return o;
};
int main()
{
    demo obj(2);
    demo obj1=++obj;
    obj.show();
    return 0;
}

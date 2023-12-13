#include<iostream>
using namespace std;
class shape{
    public:
        void demo(){
            cout<<"fn called from base shape class";
        }
};
class rectangle: public virtual shape{
    public:
        void rect(){
            cout<<"fn called from derived rectangle class";
        }
};
class triangle: public virtual shape{
    public:
        void tri(){
            cout<<"fn called from derived triangle class";
        }
};
class size: public rectangle, triangle{
    public: 
        void oo(){
            cout<<"suze";
        };
};
int main(){
    shape s1;
    rectangle r1;
    triangle t1;
    size z1; 
    z1.demo();
    return 0;
}
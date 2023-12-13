#include<iostream>
using namespace std;
class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no=a;
        }
        void print_number(){
            cout<<"Your roll no is "<<roll_no<<endl;
        }
};
class test:virtual public student{
    protected:
        float maths, phy;
    public:
        void set_marks(float m1, float m2){
            maths=m1;
            phy=m2;
        }
        void print_marks(){
            cout<<maths<<phy<<endl<<endl;
        }
};
class sports:virtual public student{
    protected:
        float score;
    public:
        void set_score(float s){
            score = s;
        }
        void print_score(){
            cout<<score<<endl<<endl;
        }
};

class Result:public test, public sports{
    private:
        float total;
    public:
        void display(){
            total=maths+phy+score;
            print_number();
            print_marks();
            print_score();
            cout<<endl<<total<<endl;
        }
};

int main(){
    Result samz;
    samz.set_number(12025);
    samz.set_marks(78.9, 99.0);
    samz.set_score(10);
    samz.display();
    return 0;
}
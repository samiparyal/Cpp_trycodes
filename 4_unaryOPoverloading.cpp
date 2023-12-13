#include<iostream>
using namespace std;
class unary
{
    private:
        int a;
    public:
        void get_data(int x){
            a=x;
        }
        void operator ++(){ //++(int) means post increment
            a=a+2;
        }
        void print_data(){
            cout<<endl<<a<<endl;
        }
};
int main(){
    int temp=5;
    unary obj;
    obj.get_data(temp);
    ++obj;
    obj.print_data();
    return 0;
}
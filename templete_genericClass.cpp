#include<iostream>
using namespace std;
template <typename T>
class demo{
    public: 
        T a;
    demo(){a=0;}
    demo(T x){
        a=x;
        cout<<a<<endl;
    }
    T max(T k, T l){
        return(k>l)?k:l;
    }
};
int main(){
    demo<int> m(1);
    demo<double> n(1.1);
    demo<int> obj;
    demo<double> o;
    int result = obj.max(10, 20);
    cout<<result<<endl;
    double result1= o.max(1.1, 1.3);
    cout<<result1<<endl;
    return 0;
}


#include<iostream>
using namespace std;
template<typename T>
class demo{
    private:
        T a, b;
    public:
        T nice(T x, T y)
        {
            a=x;
            b=y;
            cout<<"Interchanged!";
            cout<<"a&b ="<< y<< x;
        }        
};

int main()
{
    demo<int> obj;
    int result = obj.nice(10, 20);
}


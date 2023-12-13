#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
        void setID(){
            salary=122;
            cout<<"Enter the id of employee: "<<endl;
            cin>>id;
        }

        void getID(){
            cout<<"The id of the employee is "<<id<<endl;
        }

};
int main(){
    Employee meta[3];
    for(int i=0; i<4; i++){
        meta[i].setID();
        meta[i].getID();
    }
    return 0;
}
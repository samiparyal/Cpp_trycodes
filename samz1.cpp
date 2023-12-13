#include <iostream>
#include "shape.h"
using namespace std;

int main(){
    Shape *s1;
    int choice;
    cout<<"1. Rectangle \n 2. Circle \n 3. Ellipse \n 4. Exit "<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        {
            Rectangle r1(100,80,300,30);
            s1=&r1;
            s1->draw();
            break;
        }
        case 2:
        {
            Ellipse e1(100,100,0,360,30,40);
            s1=&e1;
            s1->draw();
            break;
        }
        case 3:
        {
            Circle c1(100,80,30);
            s1=&c1;
            s1->draw();
            break;
        }
        case 4: 
        {
            exit(0);
        }
        default:
        {
            cout<<"Choice Error!";
        }
    }
}
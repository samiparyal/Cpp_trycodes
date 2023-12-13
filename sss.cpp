#include <iostream>
#include <graphics.h> 
using namespace std;

class Shape{
    protected:
        int x=0;
        int y=0;
    public:
        Shape(){
            int gd=DETECT, gm;
            char gdriver_path[]="";
            initgraph(&gd,&gm,gdriver_path);
        }
        virtual void draw();
};

class Rectangle : public Shape{
    protected:
        int x1;
        int y1;
    public:
        Rectangle(int x,int x1,int y,int y1)
        {
            this->x=x;
            this->x1=x1;
            this->y=y;
            this->y1=y1;
        };
        void draw(){
            rectangle(x,x1,y,y1);
            closegraph();
        };
};

class Circle : public Shape{
    protected:
        int r;
    public:
        Circle(int x,int y,int r)
        {
            this->x=x;
            this->y=y;
            this->r=r;
        };
        void draw(){
            circle(x,y,r);
            closegraph();
        };
};

class Ellipse : public Shape{
    protected:
        int s0;
        int e0;
        int x1;
        int y1;
    public:
        Ellipse(int x,int y,int s0, int e0, int x1, int y1)
        {
            this->x=x;
            this->y=y;
            this->s0=s0;
            this->e0=e0;
            this->x1=x1;
            this->y1=y1;
        };
        void draw(){
            ellipse(x,y,s0,e0,x1,y1);
            closegraph();
        };
};
int main(){}

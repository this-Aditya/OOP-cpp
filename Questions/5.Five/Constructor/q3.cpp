#include<iostream>
using namespace std ;
class Shapes{
    protected:
    float area;
};
class Circle:public Shapes{
    int radius;
    public:
    void getCircle(){
        cout<<"enter the radius of a circle ";
        cin>>radius;
    }
    void areaCircle(){
        area= 3.14*radius*radius;
        cout<<"Area of circle is "<<area<<endl;
    }
};
class Rectangle:public Shapes{
    int l,b;
    public:
 void getRect(){
        cout<<"enter the length and breadth of a rectangle ";
        cin>>l>>b;
    }
    void areaRect(){
        area= l*b;
        cout<<"Area of rectangle is "<<area<<endl;
    }
};
class Triangle :public Shapes{
    int base,height;
    public:
    void getTriangle(){
        cout<<"enter the base and height of a triangle ";
        cin>>base>>height;
    }
    void areaTri(){
    area=.5*base*height;
    cout<<"the area of triangle is "<<area;  
}    };
    int main(){
        Circle c;
        Rectangle r;
        Triangle t;
        c.getCircle();
        c.areaCircle();
        r.getRect();
        r.areaRect();
        t.getTriangle();
        t.areaTri();
    }
    




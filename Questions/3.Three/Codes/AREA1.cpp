#include <iostream>

using namespace std;
class A{
    
    public:
    int area (int r){
        return 3.14*r*r;
    }
int area (int l,int b){
    return l*b;
}double area(double ba ,double h){
    return 0.5*ba*h;
}
};
int main()
{
    A a;
    cout<<"area of circle is "<<a.area(2)<<"\n";
    cout<<"area of rectangle is "<<a.area(2,4)<<"\n";
    cout<<"area of traingle is "<<a.area(2.0,5.0)<<"\n";
    return 0;
}


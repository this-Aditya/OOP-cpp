#include<iostream>
using namespace  std ;

class shape{
	protected:
	int area =0;
	public:
	virtual void show(){
		cout<<"Base class function "<<endl;
	}};
class triangle:public shape {
	int b1,h1;
	public:
		void input(){
			cout<<"Enter the value of base and height ";
			cin>>b1>>h1;
		}
		void areat(){
			area= 0.5*b1*h1;}
		void show(){
			cout<<"area of triangle is "<<area<<endl;}};
class square :public shape{
	int s;
	public:
		void input(){
			cout<<"Enter the side of square ";
			cin>>s;
		}
		void areas(){
			area = s*s;
		}
		void show(){
			cout<<"area of square is "<<area<<endl;
		}};
class rectangle :public shape{
	int l,b;
   public:
   void input(){
   	cout<<"Enter the length and breadth ";
   	cin>>l>>b;
   }	
   void arear(){
   	area= l*b;
   }
   void show(){
   cout<<"Area of rectangle is "<<area<<endl;	
}};
int main(){
shape *p;
triangle t;
rectangle r;
square s;
t.input();
r.input();
s.input();
t.areat();
r.arear();
s.areas();
p=&t;
p->show();
p=&r;
p->show();	
p=&s;
p->show();
}

















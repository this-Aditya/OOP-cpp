#include<iostream>
using namespace std ;
class A{
	int a,b;
	public:
		
		A(int x=0,int y=0){
			a=x;
			b=y;}
	void show(){
		cout<<a<<" "<<b<<endl;
	}};
class B{
	int c,d;
	public:
	
		B(int x=0 ,int y=0){
			c=x;
			d=y;
		}
		operator A(){
         A p(c,d); 
		return p;
		}
	void show(){
		cout<<c<<" "<<d<<endl;
	}
};
int main(){
	A x;
	B y(8,9);
	x.show();
	y.show();
	x=y;
	x.show();
	
	
}








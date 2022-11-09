#include<iostream>
using namespace std;
class A {
	int x;
	public:
	A(){
		cout<<"base constructor called\n";
	}
	~A(){
		cout<<"base destructor called\n";
	}
};
class B : public A{
	int y;
	public:
	B(){
		cout<<"derived constructor called\n";
	}
	~B(){
		cout<<"derived destructor called\n";
	}
};
		int main(){
			A x;
			B y;

		}

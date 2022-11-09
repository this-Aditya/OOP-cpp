#include<iostream>
using namespace std ;
class A{
	protected:
	int a;
	A(int i){
		a=i;
		cout<<"\na="<<a;
	}
	~A(){
		cout<<"\nbase destructor called ";
	}
};
class B:virtual public A{
	protected:
	int b;
	B(int j):A(2){
		b=j;
		cout<<"\nb="<<b;
	}
	~B(){
		cout<<"\nvirtual 1 destructor called ";
	}
};
class C:virtual public A{
	public:
		int c;
		C(int k):A(92){
			c=k;
			cout<<"\nc="<<c;
		}
		~C(){
			cout<<"\nvirtual 2 destructor called "
		;}
};
class D:public C,B{
	public:
	int d;
	D(int l):A(12),B(73),C(97){
		d=l;
	cout<<"\nd="<<d;
	}
	~D(){
		cout<<"\nderived destructor called";
	}
	};
	int main(){
		D obj(6);
//C obj(8);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

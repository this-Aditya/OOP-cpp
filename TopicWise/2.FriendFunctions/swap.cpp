#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
	void input(){
		cin>>a;
	}
	void out(){
		cout<<a;
	}
	friend void swap(A&,B&);
};
class B{
	int b;
	public:
	void input(){
		cin>>b;
	}
	void out(){
		cout<<b;
	}
	friend void swap(A&,B&);
};
void swap(A &x,B &y){
	int temp;
	temp=x.a;
	x.a=y.b;
	y.b=temp;
}
int main(){
	A j;
	B k;
	j.input();
	k.input();
	swap(j,k);
	j.out();
	cout<<" ";
	k.out();
}

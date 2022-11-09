#include<iostream>
using namespace std;
class B;
class A {
	int f1,i1;
	public:
	void input(){
		cin>>f1;
		cin>>i1;
	}
	friend void sum(A,B);
};
class B{
	int f2,i2;
	public:
	void input(){
		cin>>f2;
		cin>>i2;
	}
	friend void sum(A,B);
};

void sum(A a,B b){
	int f,i;
	i=a.i1+b.i2;
	f=a.f1+b.f2;
	if(i>12){
	f=f+1;
	i=i-12;
	cout<<"sum is "<<f<<" feet and "<<i<<" inches ";
	}}
	int main(){
		A j;B k;
		cout<<"enter the length of first object ";
		j.input();

	cout<<"enter the length of second  object ";
		k.input();
		sum(j,k);
		return 0;
	}


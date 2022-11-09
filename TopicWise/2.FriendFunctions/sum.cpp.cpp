#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public :
		void input(){
			cin>>a;
		}
		friend void sum(A,B);
};
class B{
	int b;
	public:
		void input(){
			cin>>b;
		}
		friend void sum(A,B);
};
void sum(A x,B y){
	cout<<x.a+y.b;
}
int  main(){
	A j;
	B k;
	cout<<"enter two numbers ";
	j.input();
	k.input();
	cout<<"sum is ";
	sum(j,k);
}

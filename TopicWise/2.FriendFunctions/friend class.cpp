#include<iostream>
using namespace std;
class B;
class A {
	int a;
	public:
 	void input(){
		cin>>a;
	}
	void show(B);
};
class B {
	int b;
	public:
		void input(){
			cin>>b;
		}
		friend void A::show(B);
};
void A::show(B x){
	cout<<"first is ";
	cout<<a;
	cout<<"\nsecond is ";
	cout<<x.b;
}
int main(){
	A j;
	B k;
	j.input();
	k.input();
	j.show(k);
}

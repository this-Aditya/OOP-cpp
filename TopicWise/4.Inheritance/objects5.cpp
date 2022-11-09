#include<iostream>
using namespace std;
class A{
	int a;
	static int x;
	public:
	void input(){
		x++;
		cout<<"eneter number ";
		cin>>a;
	}
	static void out(){
		cout<<"there are "<<x<<" objects ";
	}
};
int  A::x;
int main(){
	A x,y,z,p,q,r;
	x.input();
    y.input();
	z.input();
	p.input();
	q.input();
	r.input();
    A::out();
}

#include<iostream>
using namespace std;
class A {
int a;
public:
A(){
	a=98;
}
	A operator+(A b){
		A c;
		c.a=a-b.a;
		return c;
	}
	void out (){
		cout<<a;
	}
};
int main(){
	A x,y,z ;
	z=x+y;
	z.out();
}


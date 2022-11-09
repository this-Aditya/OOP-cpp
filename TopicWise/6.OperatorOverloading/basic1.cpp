#include<iostream>
using namespace std;
class A {
int r,i;
public:
void input(){
	cin>>r>>i;
}
 friend A operator+(A,A);
void out(){
	cout<<r<<" "<<i;
}
};
 A operator+(A z ,A x ){
	A y;
	y.r=z.r+x.r;
	y.i=z.i+x.i;
	return y;
}
int main(){
A p,q,r;
p.input();
q.input();
r=p+q;
r.out();	
}















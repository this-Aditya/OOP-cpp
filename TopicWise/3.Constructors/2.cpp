#include<iostream>
using namespace std;
class num{
	int a;
	public:
	num(int x){
a=x	;}
num (num &p){
	a=p.a;
}
	void out(){
		cout<<a<<endl;
	}
	
};
int main(){
	num y(3);
		y.out();
	num z=y;

	z.out();
}

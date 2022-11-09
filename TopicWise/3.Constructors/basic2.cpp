#include<iostream>
using namespace std;
class num{
	int a;
	public:
	num(int x){
a=x	;}
num (int &p){
	a=p;
}
	void out(){
		cout<<a;
	}
	
};
int main(){
	num y(3);
	num z=y;
	y.out();
	z.out();
}

#include<iostream>
using namespace std ;
template <class T1,class T2>
class num{
	T1 a;
	T2 b;
	public:
	num(T1 x,T2 y){
		a=x;
		b=y;
	}
	void show(){
		cout<<a<<" "<<b;
	}
};
int main(){
num<int,float> obj(3,6.7);
obj.show();	
}

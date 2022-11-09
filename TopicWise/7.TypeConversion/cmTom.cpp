#include<iostream>
using namespace std ;
class Centi{
	int cm;
	public:
	Centi(int c=0){
		cm=c;
	}
	void show(){
		cout<<cm<<endl;
	}
};
class Metres{
	int m ;
	public:
	Metres(int x=0){
		m=x;
	}void show(){
		cout<<m<<endl;
	}
	operator Centi(){
		Centi c(m*100);
		return c;
	}
};
int main(){
	Metres x(5);
	Centi y;
	x.show();
	y=x;
	y.show();
}

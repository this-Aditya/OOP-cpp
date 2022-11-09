#include <iostream>
using namespace std;
class alpha {
	protected:
	int a;
	alpha (int x){
	cout<<"alpha initialised ";
		a=x;
	}
};
class beta {
	protected:
	int b;
	public:
	beta (int y){
		cout<<"beta initialised ";
b=y;
	}
	void show(){
		cout<<b;
	}
};
class gaama : public alpha,beta{
	int g;
	public:
	gaama(int p,int r,int s):alpha(r),beta(s){
     	g=p;
		 cout<<"gamma initialised "	;
	}
	void show(){
		cout<<a<<" "<<b<<" "<<g;
	}
};
int main(){
	beta o(7);
	gaama ob(1,2,3);
	o.show();
	ob.show();
}






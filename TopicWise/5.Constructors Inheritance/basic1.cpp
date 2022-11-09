#include<iostream>
using namespace std;
class alpha {
	protected:
	int a;
	alpha(int i){
		a=i;
	cout<<"Alpha Initialised ";
	}	
	void show_a(){
	cout<<"a="<<a;
	}
};
class beta {
	protected;
	int b;
		beta(int j){
			b=j;
			cout<<"Beta Initialised ";
		}
		void show_b(){
		cout<<"b="<<b;
		}
};
class gamma :public alpaha, beta{
int m,n;
public:
gamma(int x,int y,int z,int p):alpha(x),beta(y){
	m=z;
	n=p;
	cout<<"gamma initialised ";
}	
void show_g(){
cout<<"m,n="<<m<<" "<<n; 
}};
int main(){
gamma g(1,2,3,4);
g.show_a();
g.show_b();
g.show_g();	
}


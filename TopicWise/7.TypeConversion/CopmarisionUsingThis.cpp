//#include<iostream>
//using namespace std;
//class one{
//	int a;
//	public:
//	void input(){
//		cin>>a;
//	}
//	one* compare(one *x){
//		if(this->a > x->a){
//			return this;
//		}else {
//			return x;
//		} 
//	}
//	void out(){
//		cout<<a<<endl;
//	}
//};
//int main(){
//	one p,q,*g;
//	p.input();
//	q.input();
//	g=p.compare(&q);
//	g->out();
//}
//
//
//
//
//
//



















#include<iostream>
using namespace std ;
class num {
	int x;
	public:
	num (int y=0){
		x=y;
	}
	num compare(num m){
		if(this->x>m.x){
		return *this;	
		}
		else {
			return m;
		}
	}
	void show(){
		cout<<x;	}
};

int main(){
	num p(9),q(13),r;
	r= p.compare(q);
	r.show();
}





















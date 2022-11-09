#include<iostream>
using namespace std;
class num{
	int x;
	public:
	void input(){
		cin>>x;
	}
	public:
		static void swap(num *a,num *b){
			num temp;
			 temp.x=(*a).x;
			(*a).x=(*b).x;
			(*b).x=temp.x;
		}
		void out(){
			cout<<"\n"<<x<<" ";
		}
};
int main(){
	num a,b;
	cout<<"enter the two numbers ";
	a.input();
	b.input();
	num::swap(&a,&b);
	cout<<"swapped numbers are ";
	a.out();
	b.out();
}

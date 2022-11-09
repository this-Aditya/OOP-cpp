#include<iostream>
using namespace std ;
template <class T>
class Number {
	T num ;
	public:
	Number(T n){
		num = n;
	}
	T getNum(){
		return num;
	}
};
int main(){
	Number<int> ob1(7); 	
	Number <double> obj2(8.7);
	cout<<ob1.getNum();
	cout<<" "<<obj2.getNum();
}



















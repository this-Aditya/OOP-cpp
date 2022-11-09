#include<iostream>
using namespace std ;

//template <class T>
//T add(T a,T b){
//	return a+b;
//}
//
//int main(){
//	cout<<add<int>(3,2);
//}

//template <class A >
//A add (A x, A y){
//	return x+y;
//}
//int main(){
//	cout<<add<int>(4,5)<<endl;
//	cout<<add<string>("Aditya ","Mishra ");
//	}

template <class T1,class T2>
void add(T1 x ,T2 y){
	cout<<x+y;
}
int main(){
	add(4,5.6);
}

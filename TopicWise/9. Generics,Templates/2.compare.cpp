#include<iostream>
using namespace std ;

//template <class T1,class T2>
//void compare(T1 a, T2 b){
//	if(a>b){
//		cout<<a;
//	}
//	else {
//		cout<<b
//;	}
//}
//

template <class T>
T compare (T a, T b){
	if (a>b){
		return a ;
	}
	else {
		return b ;
	}
}

int main(){
//	compare(5,'a');
cout<<compare<int>(3,5);
}


#include<iostream>
using namespace std ;
class A{
	int arr[5];
	public:
//	instream& operator>>(istream& inn){
//		for(int i=0;i<5;i++){
//			inn>>arr[i];
//		}
//	}
//	ostream& operator<<(ostream& outt){
//		for(int i=0;i<5;i++){
//			outt<<arr[i];
//		}
//	}
friend istream& operator>>(istream&,A&);
friend ostream& operator<<(ostream&,A&);
};
istream& operator>>(istream& inn,A& x){
	for(int i=0;i<5;i++){
		inn>>x.arr[i];
	}
}
ostream& operator<<(ostream& outt,A& x){
	for(int i=0;i<5;i++){
		outt<<x.arr[i]<<" ";
	}
}


int main(){
	A one ,two;
//	one>>cin;
//	one<<cout;
cin >>one>>two;
cout<<one<<two;
return 0;
}

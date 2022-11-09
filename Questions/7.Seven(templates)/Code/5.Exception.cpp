#include<iostream>
using namespace std ;
int main(){
	int a,b,x;
	cout<<"Enter two numbers ";
	cin>>a>>b;
	x=a/b;
	try{
		if(x!=0){
			cout<<x;
		}
		else{
			throw(6);
		}
	}
	catch(int g){
		cout<<"Division is 0 ";
	}
	return 0;
}

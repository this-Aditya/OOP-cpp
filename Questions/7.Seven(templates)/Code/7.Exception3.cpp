#include<iostream>
using namespace std ;
int main(){
	int a,b,x;
	cout<<"Enter the elememts ";
	cin>>a>>b;
	x=a-b;
	try{
		if(x>0){
			cout<<x;
		}
		else if (x<0){
			throw('c');
		}
		else {
			throw(6);
		}
	}
	catch(char a){
		cout<<"Subtraction is less than 0 ";
	}
	catch(int b){
		cout<<"Subtraction is 0 ";
	}
}

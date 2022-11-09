#include<iostream>
using namespace std ;
int main(){
	int n;
	cout<<"Enter how many elements ";
	scanf("%d",&n);
	int arr[n];
	cout<<"Enter the elements";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"you wanna find element at which index ";
	int x;
	cin>>x;
	try {
		if(x<n){
		cout<<arr[x];}
		else {
			throw('c');
		}
		}
	
	catch(char x){
		cout<<" array out of bound exception ";
	}
	
}

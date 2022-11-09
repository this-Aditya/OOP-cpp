#include<iostream>
using namespace std;
class details{
	string st;
	int length;
	public:
	details(){
		st="Hello ";
	    length=st.length();
	}
	static int i;
	details(string x){
		st=x;
		length=st.length();
	}
	void show(){
		i++;
		cout<<"string "<<i<<" is "<<st<<" and its length is "<<length<<" "<<endl;
		
	}
	void add(details p){
		cout<<st+p.st;
	}
};
int details :: i;
int main(){
	details a;
	string s;
	cout<<"enter the word ";
	cin>>s;
	details b(s);
	a.show();
	b.show();
	cout<<"concatenated string is ";
	a.add(b);
	
}

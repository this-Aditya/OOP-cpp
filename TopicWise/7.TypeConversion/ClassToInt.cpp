#include<iostream>
using namespace std ;
class Complex{
	int real,img ;
	public:
		Complex(){
			real=76;
			img =12;
		}
		 operator int (){
			return real;
		}
	void show(){
		cout<<"Real: "<<real<<" Img: "<<img<<endl;
	}
};
int main(){
	Complex num;
	int x=9;
	num.show();
	x=num;
	cout<<"x:"<<x;
	
}

#include<iostream>
using namespace std ;
class Complex {
	int real;
	int img;
	public:
	Complex(){	
	real =0;
	img =9;
	}
	Complex(int r){
		real=r;
		img =0s;
	}
    void show(){
    	cout<<"Real: "<<real<<" Img: "<<img<<endl;
	}	
};

int main(){
	Complex num ;
	num.show();
	int x = 8;
	num=x;
	num.show();
}

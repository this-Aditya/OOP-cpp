#include<iostream>
using namespace std ;
class Complex{
	int real,img;
	public:
	Complex(int r=0,int i=0){
		real=r;
		img=i;
	}
	void show(){
		if(img<0){
			cout<<real<<""<<img<<"i"<<endl;
		}else {
			cout<<real<<"+"<<img<<"i"<<endl;
		}
	}
	Complex operator+(Complex x){
	Complex y;
	y.real=real+x.real;
	y.img= img+x.img;
	return y;
	}
//Complex operator++(){
//Complex x;
//x.real=++real;
//x.img= ++img;
//return x ;
//}
//Complex operator++(int){
//	Complex x;
//	x.real=real++;
//	x.img=img++;
//	return  x;
//}
friend Complex operator++(Complex&);
friend Complex operator++(Complex& ,int);
};
Complex operator++(Complex& x){
	Complex y;
	y.real =++x.real;
	y.img = ++x.img;
	return y;
}
Complex operator++(Complex& x,int){
	Complex y;
	y.real =  x.real++;
	y.img = x.img++; 
	return y;
}

int main(){
Complex a(4,6),b(2,-9),c,d,e;
a.show();
b.show();
c=a+b;
c.show();
printf("postfix ");
d=c++;
d.show();
e=++c;
printf("prefix ");
e.show();
}












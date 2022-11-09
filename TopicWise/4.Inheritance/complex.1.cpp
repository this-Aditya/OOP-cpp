#include<iostream>
using namespace std;
class complex{
int real;
int img;
public:
complex(){
	real=5;
	img=-3;
}
complex(int x,int y){
	real=x;
	img=y;
}
complex (complex & v){
	real = v.real ;
	img = v.img ;
}
void show(){
	if(img>0){
		cout<<real<<"+"<<img<<"i"<<endl;
	}
	else{
		cout<<real<<img<<"i"<<endl;
	}
}
~complex(){
	cout<<"destructor called\n ";
}
};
int main(){
	complex a;
	int x,y;
    cout<<"enter the real and imaginary part ";
    cin>>x>>y;
    complex b(x,y),d(b);
    complex c=a;
    cout<<"complex numbers are \n";
    a.show();
	b.show();
	c.show();
	d.show();
}

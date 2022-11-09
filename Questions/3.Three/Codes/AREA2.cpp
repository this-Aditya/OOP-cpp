#include<iostream>
using namespace std;
class A{
	public:
	static int vol(int a,int b,int c){
		return a*b*c;
	}
	static float vol(float a){
		return 1.33*3.14*a*a*a;
	}
	static float vol(float a,float b){
		return 3.14*a*a*b;
	}
};
int main(){
	int l,b,h;
	float r1,h1,r2;
	cout<<"enter the length breadth and height of a cuboid ";
	cin>>l>>b>>h;
	cout<<"enter the radius of sphere ";
	cin>>r1;
	cout<<"enter the radius and height of cylinder ";
	cin>>r2>>h1; 
	cout<<"volume of cuboid is "<<A::vol(l,b,h)<<endl;
	cout<<"volume of sphere is "<<A::vol(r1)<<endl;
	cout<<"volume of cylinder is "<<A::vol(r2,h1)<<endl;
}

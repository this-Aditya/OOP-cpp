#include<iostream>
using namespace std ;

class Minute{
   float m ;
   public:
	Minute(int y=0){
		m=y;
	}
	void show(){
		cout<<"Minute: "<<m<<endl;
	}
	
};

class Hour{
float h;
public:
	void show(){
		cout<<"Hour: "<<h<<endl;
	}
Hour(int x=0){
	h=x;
}
operator Minute(){
	Minute t(h*60);
	return t;
}
};


int main(){
	Hour a(3);
	Minute b;
    a.show();
    b.show(); 
    b=a;
    b.show();
}











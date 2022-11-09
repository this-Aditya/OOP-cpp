#include<iostream>
using namespace std;
class Str{
	string s;
	public:
	Str(string t=""){
		string *p;
		p= new string ;
		*p = t;
		s=*p;
	}

    Str operator+(Str x){
    	Str z;
    	z.s=s+x.s;
    	return z;
	}
	void show(){
		cout<<s;
	}
};
int main(){
	Str a("Aditya "),b("Mishra "),c;
c=a+b;
c.show();
}

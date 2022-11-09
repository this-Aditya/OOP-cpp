#include<iostream>
using namespace std ;
class human {
	protected:
	int age ;
	public:
		human(){
			age=78;
		}
		human(int x){
			age =x;
		}
	virtual void show(){
		cout<<age <<endl;
	}
};
class male :public human{
	protected:
	int agee;
	public:
	male(int z=0){
		agee=z;
	}
	void show(){
		cout<<agee<<endl;
	}
};
int main(){
	human *p;
human h(500);
male m(34);
p=&h;
p->show();
p=&m;
p->show();
}














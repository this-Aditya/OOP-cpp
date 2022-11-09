#include<iostream>
using namespace std;
class Base{
	public:
	virtual void show()=0;
};
class derived:public Base{
	void show(){
		cout<<"Overridden function "<<endl;
	}
}; 
int main(){
	Base *b;
	derived d;
	b=&d;
	b->show();
}














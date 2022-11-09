#include<iostream>
using namespace std ;
class Details {
	string name;
	int age ;
	public:
	Details(string n="", int a=0){
		name =n;
		age = a;
	}
	void* operator new (size_t size){
		return malloc(size);
	}
	void show(){
		cout<<"name: "<<name<<"age: "<<age<<endl;
	}
};
int main(){
	Details *one;
	one = new Details("Aditya ",19);
	one->show();
}

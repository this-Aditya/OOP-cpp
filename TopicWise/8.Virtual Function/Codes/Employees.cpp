#include<iostream>
using namespace std ;
class Employee{
	protected:
	int total=0;
	public:
	virtual void show(){
		cout<<"Base class function "<<endl;
	}
};
class Regular:public Employee{
	int basicSal;
	int da;
	int hra;
	public:
	void input(){
		cout<<"Enter the basic salary ";
		cin>>basicSal;
	}
	void findTotal(){
	da= 0.1*basicSal;
	hra= 0.8*basicSal;
	total = da+hra+basicSal;}
	void show(){
		cout<<"Salary of regular employee: "<<total<<endl;
	}
};
class Parttime:public Employee{
	int hour;int payPerHour;
	public:
	void input(){
		cout<<"Enter hours and pay per hour ";
		cin>>hour>>payPerHour;
	}
	void findtotal(){
	total = hour*payPerHour;}
	void show(){
		cout<<"Salary of part time employee is "<<total<<endl;
	}	};
	
int main(){
	Employee *e;
	Regular r ;
	Parttime p;
	r.input();
	r.findTotal();
	p.input();
	p.findtotal();
	e=&r;
	e->show();
	e=&p;
	e->show();

}	

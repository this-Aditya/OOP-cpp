#include<iostream>
using namespace std ;
class Account{
	protected :
	int accno ;
	float balance ;
	string name ;
	public:
		void input(){
		cout<<"Enter the name ";
		cin>>name;
		cout<<"Enter the account number  ";
		cin>>accno ;
		cout<<"Enter the balance ";
		cin>>balance ;
	}
	virtual	void deposit(){
			cout<<"Base class Deposit ";
		}
	virtual	void withdraw(){
			cout<<"Base class withdraw ";
		}
		virtual void show(){
			cout<<"Base show Function ";
		}
		};
class Savings:public Account {
	int minB=10000;
	int amt;
	public:
	 void deposit (){
		printf("Enter the amout to deposit ");
		cin>>amt ;
	balance +=amt ;
	};
	 void withdraw(){
		cout<<"Enter the amount to withdraw ";
		cin>>amt;
		if(balance-amt<minB){
			cout<<"Withdrwan amout is excedding minimum balance ";
			return ;
		}
		balance -= amt ;
	}
	 void show(){
		cout<<"Savings account "<<endl;
		cout<<"Name: "<<name<<". AccNo: "<<accno<<". Balance: "<<balance<<". Minimum Balance: "<<minB<<endl;
	}
	
};
class Current :public Account {
	int overDue;
	int amt;
	public:
    void deposit (){
    	printf("Enter the amout to deposit ");
		cin>>amt ;
	balance +=amt ;
	}
	void withdraw(){
		cout<<"Enter the amount to withdraw ";
		cin>>amt;
		balance -= amt ;
	}
	void show(){
		cout<<"Current Account "<<endl;
		cout<<"Name: "<<name<<". ACCNo: "<<accno<<". Balance: "<<balance<<". Overdue amout "<<balance<<endl;
	}
};

int main(){
	Account * a;
	Savings s;
	Current c;
	s.input();
	c.input();
	a=&s;
	a->deposit();
	a->withdraw();
	a->show();
	a=&c;
	a->deposit();
	a->withdraw();
	a->show();
return 0;
}

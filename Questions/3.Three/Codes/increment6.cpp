#include<iostream>
using namespace std;
class num{
	private:
	static int x;
	public:
	void input(){
		cin>>x;
	}
    static void inc(){
    	x++;
	
	}
	void out(){
		cout<<x;
	}};
	int num :: x;
	

int main(){
	num a,b;
	cout<<"enter the number ";
    a.input();
    num::inc();
    num::inc();
    cout<<"the incremented value is ";\
    b.out();
}


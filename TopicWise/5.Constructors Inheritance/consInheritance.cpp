#include<iostream>
using namespace std;
class parent{
	protected:
	int p;
	parent(int a){
		p=a;
	}
};
class child :public parent{
	int c;
	public:
	child(int b):parent(8){
		c=b;
	}
	void out(){
		cout<<c<<" "<<p;
	}
};
int main()
{
	child one(9);
	one.out();
}









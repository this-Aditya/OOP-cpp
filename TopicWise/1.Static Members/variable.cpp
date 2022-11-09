#include<iostream>
using namespace std;
class num{
	static int n;
	public:
	void count(){
		++n;
	}void out(){
		cout<<n<<" ";
	}
};
int num :: n;
int main(){
	num a,b,c;
	a.count();
	b.count();
	a.count();
	a.count();
	c.count();
a.out();
b.out();
}

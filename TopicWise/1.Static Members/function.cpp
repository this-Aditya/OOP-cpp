#include<iostream>
using namespace std;
class num{
	static int n;
public:
	void count(){
		++n;
	}
	static void out(){
	   cout<<n<<" ";	
}};
int num :: n;
int main(){
	num a,b,c;
	a.count();
	a.count();
	b.count();
	c.count();
	num :: out();
	b.count();
	num :: out();
}

#include<iostream>
using namespace std;
class num{
	int n;
	public:
	void count(){
		n++;
	}
	void out(){
		cout<<n<<" ";
	}
};
int main(){
	static num a,b;
	a.count();
	a.count();
	b.count();
    a.count();
    a.out();
    b.out();
}

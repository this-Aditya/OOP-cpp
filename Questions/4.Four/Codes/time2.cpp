#include<iostream>
using namespace std;
class time1{
	int hour;
	int min;
	static int i;
public:
		time1(){
		hour=0;
		min=0;
	}
	time1(int x){
		hour=x;
		min=0;
	}
	time1(int x,int y){
		hour=x;
		min=y;
	}
	void show(){
		i++;
		cout<<endl<<"time "<<i<<" is ";
		cout<<hour<<":"<<min;
	}
};
int time1::i;
int main(){
int a,b,c;
	time1 t1;
	cout<<"enter the hour and minute ";
	cin>>a>>b;
	cout<<"enter the hour ";
	cin>>c;
	time1 	t2(a,b),	t3(c),	t4(t3);
	t1.show();
    t2.show();
	t3.show();
	t4.show();

	return 0;
}

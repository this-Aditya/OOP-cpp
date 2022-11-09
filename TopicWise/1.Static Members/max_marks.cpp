#include<iostream>
using namespace std;
class num{
	int marks;
	
	static int max;
	public:
		void input(){
			cin>>marks;
		}
		 void maxx(num a,num b){
			if(a.marks>b.marks){
				max=a.marks;
			}
		}
		void out(){
			cout<<max;
		}
};	int num::max;	
		

int main(){
	 num st[10];
	num c;
	cout<<"enter the numbers ";
    for(int i=0;i<10;i++){
    	st[i].input();
	}
	for(int i=1;i<10;i++){
		st[i].maxx(st[i-1],st[i]);
	}
cout<<"maximum number is ";
// num::maxx;
 c.out();
}

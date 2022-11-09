#include<iostream>
using namespace std;
class disp{
public:
	
     void print(char ch = '*',int n=80){
    	for(int i=0;i<n;i++){
    		printf("%c ",ch);
		}
	}
};
int main(){
	disp a;
	int x;
	char c;
	cout<<"enter which character and how much time to print ";
	cin>>c>>x;
	a.print(c,x);
	return 0;
}

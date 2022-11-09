#include<iostream>
using namespace std;
class Distance {
	int feet ;
	int inches ;
    public:
	Distance (int f ,int i ){
		feet=f ;
		inches=i ;
	}
	void operator--(int){
		inches--;
		feet--;
	}
	void show() {
	printf("%d feet ,%d inches \n",feet,inches );
}};
int main(){
	Distance x(5,9);
	x.show();
	x--;
	x.show();
}

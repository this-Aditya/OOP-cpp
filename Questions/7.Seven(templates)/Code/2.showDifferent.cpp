#include<iostream >
using namespace std ;

template<class T1,class T2>
void show(T1 a, T2 b){
	cout<<"Elements are ";
	cout<<a<<" "<<b;
}

int main(){
	int a=4;
	float c= 6.7;
	show(a,c);
}

#include<iostream>
using namespace std ;
class one {
int a=98;
public:

void show(){
	cout<<a;

}
};
int main(){
	one *s;
	one p;
	s=&p;
	s->show();
}

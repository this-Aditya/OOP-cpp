#include<iostream >
using namespace std;
//class minute;
 class hour {
 	float h ;
 public:
 	hour(float x =0){
 		h=x;
	 }
void show (){
	cout<<h<<endl;
}
int get_h(){
	return h;
}
 };
 class minute{
 	float m ;
 	public:
 	minute(float y =0){
 		m=y;
	 }
	 minute(hour j){
	 	m= j.get_h()*60;
	 }
	 void show(){
	 	cout<<m<<endl;
	 }
	 operator hour(){
	 	hour p(m/60.0);
	return p;
	 }
 };
 int main(){
 	hour h1(3),h2;
 	minute  m1 ,m2(300);
 	m1=h1;
 	m1.show();
 	
	 h2= m2 ;
 	h2.show();
 }
 
 
 
 
 
 
 
 
 

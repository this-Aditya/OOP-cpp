#include<iostream >
using namespace std ;
 class time1{
  int hour ;
	 int minute ;
	 int second;
 	public:
	  time1(int h=0,int m=0,int s=0){
	  	hour=h;
	  	minute=m;
	  	second=s;
	  }
	  bool operator== (time1 x){
	  	if((x.hour==hour)&&(x.minute==minute)&&(x.second==second)){
	  		return true;
		  }else {
		  	return false;
		  }
	  }
	  void operator=(int arr[3]){
	  	hour=arr[0];
	  	minute=arr[1];
	  	second=arr[2];
	  }
	  void show(){
	  	cout<<hour<<" "<<minute<<" "<< second<<endl ;
	  }
	  time1 operator+(time1 g){
	  	time1 h;
	  	h.hour= g.hour+hour;
	  	h.minute=g.minute+minute;
	  	h.second=g.second+second;
	  	if(h.second>60){
	  		h.second = h.second -60;
	  		h.minute = h.minute +1;
		  }if(h.minute>60){
	  		h.minute = h.minute -60;
	  		h.hour = h.hour +1;
		  }
		  return h;
	  }
 };
 int main(){
 	time1 a(01,15,30),b(3,7,19),c,d;
 	bool e ;
 	a.show();
 	c=a+b;
 	c.show();
 	d={1,15,30};
 	e= a==d;
 	if(e){
 		cout<<"Equal ";
	 }else {
	 	cout<<"Not equal ";
	 }
	 }
 
 
 
 
 
 
 
 

#include<iostream>
using namespace std;
class Student {
	protected:
	char name[10];
	int age ;
	int roll;
};
class Test : public Student{
	int marks[5];
	public:
	void input(){
		cout<<"enter the name ,age ,roll no ";
		cin>>name;
		cin>>age;
		cin>>roll;
		cout<<"now enter the marks obtained in five subjects ";
	    for(int i=0;i<5;i++){
	    	cin>>marks[i];
		}}
		void output(){
			cout<<"details of student are ";
			cout<<"name="<<name<<"  "<<"roll no="<<roll<<"  "<<"age="<<age<<endl;
		    cout<<"marks in five subjects are ";
		    for(int i=0;i<5;i++){
		    	cout<<marks[i];
			}
		}
	
};
int main(){
	Test s1;
	s1.input();
	s1.output();
	
	
	
	
	
	
	
	
	
}

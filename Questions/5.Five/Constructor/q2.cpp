#include<iostream>
using namespace std;
class Student {
	protected:
	char name[10];
	int age ;
	int roll;
};
class Test : public Student{
    public:
    int marks[5];
	void input(){
		cout<<"\nenter the name ,age ,roll no ";
		cin>>name;
		cin>>age;
		cin>>roll;
		cout<<"now enter the marks obtained in five subjects out of 100 ";
	    for(int i=0;i<5;i++){
	    	cin>>marks[i];
		}}
		void output(){
			cout<<"\ndetails of student are ";
			cout<<"Name="<<name<<"  "<<"roll no="<<roll<<"  "<<"age="<<age<<endl;
		    cout<<"Marks in five subjects are ";
		    for(int i=0;i<5;i++){
		    	cout<<marks[i]<<" ";
			}}};
            
            
            class Sport:public Student{	public:
                int marks_in_sport;
               Sport(int m){
               	marks_in_sport=m;
			   }
            };
			class Result : public Test{
			    int total=0;
			    float percent;
			    public:
			    void totalmarks(){
			        for (int i = 0; i < 5; i++) {
			            total+=marks[i];
			        }
			    }
			    void percentage(){
			     percent=total/5.0;
			    
			    cout<<"\nTotal marks obtained by student are "<<total<<" and percentage are "<<percent;
			}};
			
			class ResultTwo:public Sport,public Test{
			    int total;
			    float percent;
			    public:
			    	ResultTwo(int n ):Sport(n){
			    	total=0;
					percent=0;	
					}
			    void totalmarks(){
			        for (int i = 0; i < 5; i++) {
			            total+=marks[i];
			        }total+=marks_in_sport;
			    }
			    void percentage(){
			     percent=total/7.0;
			    
			    cout<<"\nTotal marks obtained by student are "<<total<<" and percentage are "<<percent;}
			};
int main(){
// 	Test s1;
// 	s1.input();
// 	s1.output();
Result s;
s.input();
s.output();
s.totalmarks();
s.percentage();

ResultTwo s1(197);
s1.input();
s1.output();
s1.totalmarks();
s1.percentage();

}



#include<iostream>
using namespace std ;
class Student {
	string name;
	int age;
	float marks;
	public:
		Student(string n, int a ,float m ){
			name = n ;
			age = a;
			marks =m;
		}
		void* operator new(size_t naam){
			void* pointer;
			pointer= malloc(naam);
		    return pointer;
		}
		void operator delete(void * s ){
		cout<<"\nmemory free ";
		free(s);
		
		}
	void display (){
		cout<<name<<" "<<age<<" "<<marks;
	}
};
int main(){
  Student *s1;
  s1=new Student("Aditya",19,93.6);
  s1->display();
  delete(s1);
}






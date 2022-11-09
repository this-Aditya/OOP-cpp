#include<iostream>
using namespace std;
class Employee{
    protected:
    char name[20];
    int id;
    float salary;
    public:
    	void get(){
        cout<<"\nName=";
        cin>>name;
        cout<<"Id=";
        cin>>id;
    }
    void out(){
        cout<<"name is "<<name;
        cout<<"\nId is "<<id<<endl;
    }
};



class Regular:public Employee{
    int DA;
    int HRA;
    int BasicSal;
    public:
    
    void finalSal(){
        cout<<"Base salary=";
        cin>>BasicSal;
        DA=BasicSal*.8;
        HRA=BasicSal*.1;
        salary=BasicSal+DA+HRA;
        cout<<"total salary is "<<salary;
    }};
    
    
    
    class PartTime:public Employee{
        int hours;
        int payHour;
        public:
      void   finalSal2(){
          cout<<"enter the number of working hours ";
          cin>>hours;
          cout<<"What is pay per hour ";
          cin>>payHour;
          salary=hours*payHour;
          cout<<"salary is "<<salary;
      }
    };
    int main(){
        Regular e1;
        PartTime e2;
        e1.get();
        e1.out();
        e1.finalSal();
        e2.get();
        e2.out();
        e2.finalSal2();
        
    }


#include<iostream>
using namespace std ;
class A{
    protected:
    A(){
        cout<<"A constructor called "<<endl;
    }
    ~A(){
        cout<<"A destructor called "<<endl;
    }
};
class B{
    protected:
  B(){
        cout<<"B constructor called "<<endl;
    }
    ~B(){
        cout<<"B destructor called "<<endl;
    }   
};
class C:public B,public A{
    public:
     C(){
        cout<<"C constructor called "<<endl;
    }
    ~C(){
        cout<<"C destructor called "<<endl;
    }
};
int main(){
    C obj;
}


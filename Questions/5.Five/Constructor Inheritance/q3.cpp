#include<iostream>
using namespace std ;
class A{
    public:
    A(){
        cout<<"A constructor called "<<endl;
    }
    ~A(){
        cout<<"A destructor called "<<endl;
    }
};

class C:virtual public A {
    public:
     C(){
        cout<<"C constructor called "<<endl;
    }
    ~C(){
        cout<<"C destructor called "<<endl;
    }
};
class B:virtual public A {
    public:
  B(){
        cout<<"B constructor called "<<endl;
    }
    ~B(){
        cout<<"B destructor called "<<endl;
    }   
};
class D: public B,public C{
    public:
    D(){
        cout<<"D constructor called "<<endl;
    }
    ~D(){
        cout<<"D destructor called "<<endl;
    }
};

int main(){
    D obj;
}


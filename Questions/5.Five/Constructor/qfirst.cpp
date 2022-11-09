#include<iostream>
using namespace std;
class base{
	protected:
	int a=88;
		public:
//base(){
//	 a=0;
//}
};
class single:public base{
	public:
	int b;
	single(){
		 b=1;
	}
	void out(){
cout<<a<<" "<<b;
	}
};
class multilevel : public single{
	public:
		int c;
		multilevel(){
			c=3;
		}
		void out(){
cout<<endl<<a<<" "<<b<<" "<<c;
	}
};
class F{
	protected:
		int k;
		public:
			F(){
				k=4;
			}
};
class hybrid:public single,F{
	public:
		int l;
			public:
hybrid(){
	l=5;
}
void out(){
cout<<endl<<a<<" "<<b<<" "<<k<<" "<<l;
	}
};
class hier{
	protected:
	int g;
		public:
			hier(){
				g=6;
			}

};
class A:public hier{
	public:
	int d;
	A(){
		d=7;
	}
	void out(){
cout<<endl<<d<<" "<<g;
	}
};
class B:public hier {
	public:
	int e;
	B(){
		e=8;
	}void out(){
cout<<endl<<e<<" "<<g;
	}
};
class C:public hier {
	public:
		int f;
		C(){
			f=9;
		}void out(){
cout<<endl<<f<<" "<<g;
	}
};
class D{
	protected:
		int h;
			public:
D(){
	h=10;
}
};
class E{
	protected :
	int i;	public:
E(){
	i=11;
}
};
class multiple:public D,E{
	public:
	int j;
	multiple(){
		j=12;
	}void out(){
cout<<endl<<h<<" "<<i<<" "<<j;
	}
};
class G {
	protected:
	int m;	public:
G(){
	m=13;
}
};
class H:virtual public G{
		protected:
	int n;	public:
H(){
	n=14;
}
};
class I : virtual public G{ 	protected:
	int o;
		public:
I(){
	o=15;
}
};
class multipath:public H,I{	public:
	int p;
	multipath(){
		p=16;
	}
	void out(){
cout<<endl<<m<<" "<<n<<" "<<o<<" "<<p;
	}
};
 
int main(){
	single one;
	multilevel two;
	multiple three;
	hybrid four;
	A five;
	B six;
	C seven;
	multipath eight;
	one.out();
	two.out();
	three.out();
	four.out();
	five.out();
	six.out();
	seven.out();
	eight.out();
	
}
























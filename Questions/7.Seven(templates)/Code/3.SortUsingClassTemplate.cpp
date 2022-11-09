#include<iostream>
using namespace std ;
template <class T >
class num{
	T arr[5];
	public:
		void input(){
			for(int i=0;i<5;i++){
				cin>>arr[i];
			}
		}
		
		num& sort(num &n){
			T temp;
			for(int i=0;i<5;i++){
				for(int j=i+1;j<5;j++){
				if(n.arr[i]>n.arr[j]){
					temp=n.arr[i];
					n.arr[i]=n.arr[j];
					n.arr[j]=temp;
				}
				}
			}
		}
		
		void show(){
			for(int i=0;i<5;i++){
				cout<<arr[i]<<" ";
			}
		}
};

int main(){
	num<int> array;
	array.input();
	array.show();
	array.sort(array);
	cout<<"\nSorted array is \n";
	array.show();
}











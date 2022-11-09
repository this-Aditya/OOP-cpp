#include<iostream>
using namespace std ;

template <class T>
void sort(T* a,int size){
	T temp;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int main(){
	int arr[5];
	float arr2[5];
	int length1 = sizeof(arr)/sizeof(arr[0]);
	int length2 = sizeof(arr2)/sizeof(arr2[0]);
	printf("Enter the array ");
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	sort(arr,length1);
	printf("Sorted array is ");
	for(int i=0;i<5;i++){
cout<<arr[i]<<" ";
}

	printf("Enter the second array ");
	for(int i=0;i<5;i++){
		cin>>arr2[i];
	}
	sort(arr2,length2);
	printf("Sorted array is ");
	for(int i=0;i<5;i++){
cout<<arr2[i]<<" ";
}
}

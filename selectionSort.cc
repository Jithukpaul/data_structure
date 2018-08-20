#include<iostream>
using namespace std;
int main(){
	int siz;
	cout<<"Enter the size: ";
	cin>>siz;
	int arr[siz];
	cout<<"Enter the array elements: ";
	for(int i=0;i<siz;i++){
		cin>>arr[i];
	}
	cout<<"\nBefore sorting:\n";
	for(int a:arr){
		cout<<a<<" ";
	}
	int small,temp;
	for(int i=0;i<siz-1;i++){	
		bool changed= false;
		small=i;
		for(int j=i;j<siz;j++){
			if(arr[small]>arr[j]){
				small= j;
				changed=true;
			}
		}
		if(changed){
			temp= arr[i];
			arr[i]=arr[small];
			arr[small]=temp;
		}	
	}
	cout<<"\nAfter sorting:\n";
	for(int a:arr){
		cout<<a<<" ";
	}
	return 0;
}
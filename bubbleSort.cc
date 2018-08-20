#include<iostream>
using namespace std;
void bubble(int arr[],int siz){
	int temp;
	while(siz>1){
		for(int i=0;i<siz-1;i++){
			if(arr[i]>arr[i+1]){
				temp= arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		siz--;
	}
}
int main(){
	int siz;
	cout<<"Enter the size: ";
	cin>>siz;
	int arr[siz];
	cout<<"Enter the array elements: ";
	for(int i=0;i<siz;i++){
		cin>>arr[i];
	}
	cout<<"Before sorting:\n";
	for(int a:arr){
		cout<<a<<" ";
	}
	bubble(arr,siz);
	cout<<"\nAfter sorting:\n";
	for(int a:arr){
		cout<<a<<" ";
	}
	return 0;
}
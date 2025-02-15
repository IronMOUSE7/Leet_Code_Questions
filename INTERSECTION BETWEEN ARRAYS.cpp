#include<iostream>
using namespace std;

void intersection(int arr[],int sec[],int n,int m){
	for(int i=0;i<n;i++){
		int element=arr[i];
		
		for(int j=0;j<m;j++){
			if(element==sec[j]){
				cout<<element<<endl;
				sec[j]=0;
				break;
			}
		}
	}
}

int main(){
	int arr[10];
	int sec[10];
	int n;
	int m;
	cout<<"enter the size of the first array : ";
	cin>>n;
	cout<<"enter the number of elements in the first array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"enter the size of the second array : ";
	cin>>m;
	cout<<"enter the number of elements in the second array : ";
	for(int i=0;i<m;i++){
		cin>>sec[i];
	}

	
	
	
	intersection(arr,sec,n,m);
	
}

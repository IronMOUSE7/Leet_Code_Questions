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
	int arr[10]={1,2,3};
	int sec[10]={3,4};
	
	int n=3;
	int m=2;
	
	intersection(arr,sec,n,m);
	
}

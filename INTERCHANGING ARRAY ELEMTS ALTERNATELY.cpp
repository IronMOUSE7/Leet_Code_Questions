#include<iostream>
using namespace std;

void Printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void Reverse(int arr[],int n){
	int start=0;
	int alt=1;
	
	while(alt<n){
		swap(arr[start],arr[alt]);
		start+=2;
		alt+=2;
	}
}

int main(){
	
	int n=4;
	int arr[10]={2,7,5,9};
	int oddarr[10]={5,9,7,0,4};
	
	Reverse(arr,4);
	Reverse(oddarr,5);
	
	
	Printarray(arr,4);
	Printarray(oddarr,5);
	
	
	
	return 0;
}

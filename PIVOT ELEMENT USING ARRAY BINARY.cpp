#include<iostream>
using namespace std;

int pivot(int arr[],int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]>arr[0]){
			s=mid+1;
		}else{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return s;
}

int Binary(int arr[],int n,int s,int e,int key){
	int start=s;
	int end =e;
	int mid=start+(end-start)/2;
	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
		if(key>arr[mid]){
			start=mid+1;
		}else{
			end=mid-1;
		}
		mid = start+(end-start)/2;
	}
	return -1;
}


int main(){
	int arr[10]={7,8,1,3,5};
	int n=5;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int key;
	cout<<" enter the key that you want to find for the following array : ";
	cin>>key;
	int ans=0;
	int p=pivot(arr,n);
	if(arr[p]<=key&&key<=arr[n-1]){
	ans=Binary(arr,n,p,n-1,key);
	}else{
		ans=Binary(arr,n,0,p-1,key);
	}
	cout<<"the key is located at : "<<ans<<endl;
	
}

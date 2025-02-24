#include<iostream>
using namespace std;

int FirstOccur(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int ans=0;
	int mid=start+(end-start)/2;
	
	while(start<=end){
		if(arr[mid]==key){
			ans=mid;
			end=mid-1;
		}
		if(arr[mid]<key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int LastOccur(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int ans=0;
	int mid=start+(end-start)/2;
	
	while(start<=end){
		if(arr[mid]==key){
			ans=mid;
			start=mid+1;
		}
		if(arr[mid]<key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int main(){
	int arr[10]={1,2,5,6,11,11,23};
	int n = 7;
	
	
	int first=FirstOccur(arr,7,11);
	int last=LastOccur(arr,7,11);
	
	cout<<"the first occurence of 11  is :"<<first<<endl;
	
	cout<<"the last occurence of 11  is :"<<last<<endl;
	
	
	
}

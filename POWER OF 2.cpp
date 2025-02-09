#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the number which u think is a power of 2 : ";
	cin>>n;
	
	int ans=1;
	
	for(int i=0;i<=30;i++){
		if(ans==n){
			return true;
		}
		if((ans>INT_MAX/2)||(ans<INT_MIN/2)){
			return false;
		}
		ans=ans*2;
		
	}
	return false;
	
	
}

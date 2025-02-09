#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the number which u think is the power of 3 :";
	cin>>n;
	
	 int ans=1;

        for(int i=0;i<=30;i++){
            
            if(ans==n){
                cout<<"it is a power of two";
            }
            if((ans>INT_MAX/3)||(ans<INT_MIN/3)){
                return false;
            }
            ans=ans*3;
        }
        cout<<"it is not the power of 3 ";
        return 0;
}

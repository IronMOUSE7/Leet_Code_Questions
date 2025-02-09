#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cout<<"enter the number that you think is a power of 4 : ";
	cin>>n;
	int ans=1;
        for(int i=0;i<=30;i++){
            if((ans>INT_MAX/4)||(ans<INT_MIN/4)){
                return false;

            }
            ans=pow(4,i);
            if(ans==n){
                cout<<"it is a power of 4";
            }
        }
        cout<<"it is a not a power of 4";
        
    }


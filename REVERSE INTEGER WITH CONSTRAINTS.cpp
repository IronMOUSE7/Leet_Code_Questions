#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number : ";
	cin>>n;
	int d=0,sum=0,pro=1;
	int substract=0;

    while(n!=0){
        d=n%10;
        sum+=d;
        pro*=d;
        n/=10;

    }
    substract=pro-sum;

    cout<< substract<<endl;

}

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=n;
	int rem,sum=0;
	while(n>0){
		rem=n%10;
		sum=sum+pow(rem,3);
		n/=10;
	}
	if(sum==a){
		cout<<"Armstrong Number"<<endl;
	}else{
		cout<<"Not Armstrong Number"<<endl;
	}
}

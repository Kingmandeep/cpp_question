#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0,rem,k=0;
	while(n>0){
		rem=n%10;
		if(rem==1){
			sum=sum+pow(2,k);
			k++;
		}else{
			k++;
		}
		
		n/=10;
	}
	
	cout<<sum;
}

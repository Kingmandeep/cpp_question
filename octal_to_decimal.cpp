#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int sum=0,rem,k=0;
	while(n>0){
		rem=n%10;
		sum=sum+rem*pow(8,k);
		k++;
		n/=10;
	}
	cout<<sum;
}

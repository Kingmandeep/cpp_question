#include<iostream>

using namespace std;

int gcd(int n, int m){
	
	int sum1=n;
	int sum2=m;
	
	while(sum2!=0){
		int temp=sum1%sum2;
		sum1=sum2;
		sum2=temp;
		
	}
	
	return sum1;
}

int main(){
	
	int n,m;
	cin>>n>>m;
	
	cout<<gcd(n,m);
}

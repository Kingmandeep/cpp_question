#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0,rem;
	
	while(n>0){
		rem=n%2;
		sum=sum*10+rem;
		n/=2;
	}
	int rev=0;
	while(sum>0){
		rem=sum%10;
		rev=rev*10+rem;
		sum/=10;
	}
	cout<<rev<<endl;
}

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int rem,rev=0;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	cout<<rev<<endl;
}

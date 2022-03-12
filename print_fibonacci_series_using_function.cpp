#include<iostream>
using namespace std;
int fib(int n0, int n1){
	return (n0+n1);
}
int main(){
	int n;
	cin>>n;
	
	int n0=0,n1=1;
	
	for(int i=0;i<n;i++){
		cout<<n0<<" ";
		int next=fib(n0,n1);
		n0=n1;
		n1=next;
		
	}
}

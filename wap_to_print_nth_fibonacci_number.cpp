#include<iostream>

using namespace std;

int fib(int n){
	
	if(n==0 || n==1){
		return n;
	}
	
	return fib(n-1)+fib(n-2);
}

int main(){
	
	int n;
	cin>>n;
	
	int n1=0;
	int n2=1;
	
	
	cout<<fib(n);
}

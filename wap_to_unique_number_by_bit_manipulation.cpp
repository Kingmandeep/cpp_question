#include<iostream>
#include<algorithm>
using namespace std;

int find(int a[], int n){
	
	int xorsum=0;
	for(int i=0;i<n;i++){
		xorsum = xorsum ^ a[i];
	}
	
	return xorsum;
}

int main(){
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<find(a,n);
}

#include<iostream>

using namespace std;

bool sorted(int n, int a[]){
	
	if(n==1){
		return true;
	}
	
	if(a[n-1]>a[n-2]){
		sorted(n-1,a);
	}else{
		return false;
	}
}

int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<sorted(n,a);
}

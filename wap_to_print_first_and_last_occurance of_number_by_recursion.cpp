#include<iostream>

using namespace std;


int last(int n, int a[], int x){
	
	if(n==0){
		return -1;
	}
	
	if(a[n-1]==x){
		return n-1;
	}
	
	last(n-1,a,x);
}

int first(int n,int i, int a[], int x){
	if(i==n){
		return -1;
	}
	
	if(a[i]==x){
		return i;
	}
	
	return first(n,i+1,a,x);
	
}
int main(){
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int x;
	cin>>x;
	
	cout<<first(n,0,a,x)<<" is first occurance and last occurance is "<<last(n,a,x)<<" of "<<x<<endl;
}

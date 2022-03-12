#include<iostream>
using namespace std;
int binary(int a[],int s,int n, int k){

	if(s>n){
		return -1;
	}
	int mid=(s+n)/2;
	if(a[mid]==k){
		return mid;
	}else if(a[mid]>k){
		binary(a,s,mid-1,k);
	}else if(a[mid]<k){
		binary(a,mid+1,n,k);
	}
	
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	cin>>k;
	cout<<binary(a,0,n,k);
}

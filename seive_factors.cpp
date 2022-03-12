#include<iostream>
using namespace std;

void seivefactorial(int n){
	
	int a[n+1]={0};
	
	for(int i=2;i<=n;i++){
		a[i]=i;
	}
	
	for(int i=2;i<=n;i++){
		
		if(a[i]==i){
			for(int j=i*i;j<=n;j+=i){
				if(a[j]==j){
					a[j]=i;
				}
	    	}
		}
		
	}
	
	while(n!=1){
		cout<<a[n]<<" ";
		n=n/a[n];
	}
}

int main(){
	int n;
	cin>>n;
	
	seivefactorial(n);
}

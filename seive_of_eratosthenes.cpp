#include<iostream>

using namespace std;

void prime_seive(int n){
	
	int a[100]={0};
	
	for(int i=2;i<=n;i++){
		if(a[i]==0){
			for(int j=i*i;j<=n;j+=i){
				a[j]=1;
			}
		}
	}
	
	for(int i=2;i<=n;i++){
		if(a[i]==0){
			cout<<i<<" ";
		}
	}
}

int main(){
	
	int n;
	cin>>n;
	
	prime_seive(n);
}

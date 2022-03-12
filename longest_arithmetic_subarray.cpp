#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int sum=0,ans=0;
	int t=a[1]-a[0];
	for(int i=0;i<n-1;i++){
		if(a[i+1]-a[i]==t){
			sum++;
		}else{
			if(sum>ans){
				ans=sum;
			}
			sum=1;
			t=a[i+1]-a[i];
		}
	}
	
	cout<<ans+1;
	
}

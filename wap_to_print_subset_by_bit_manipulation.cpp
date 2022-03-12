#include<iostream>

using namespace std;

void subset(string a[], int n){
	
	for(int i=0;i<(1<<n);i++){
		for(int j=0;j<n;j++){
			if(i & (1<<j)){
				cout<<a[j]<<" ";
			}
		}
		cout<<endl;
	}
}

int main(){
	
	int n;
	cin>>n;
	
	string a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	subset(a,n);
}

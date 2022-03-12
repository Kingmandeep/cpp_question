#include<iostream>

using namespace std;

void remove(int a[], int n){
	
	int b[n],k=1;
	int c=a[0];
	b[0]=c;
	for(int i=0;i<n;i++){
		if(a[i]==c){
			
		}else{
			c=a[i];
			b[k]=c;
			k++;
		}
	}
	
	for(int i=0;i<k;i++){
		cout<<b[i]<<" ";
	}
	
}

int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	remove(a,n);
}

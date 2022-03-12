#include<iostream>

using namespace std;

int setBit(int n, int pos){
	
	return ((n & (1<<pos)) !=0);
}

void unique(int a[], int n){
	
	int xorsum=0;
	for(int i=0;i<n;i++){
		xorsum=xorsum^a[i];
	}
	
	int setbit=0;
	int pos=0;
	while(setbit!=1){
		
		setbit = xorsum & 1;
		pos++;
		xorsum = xorsum >> 1;
	}
	
	int firstxor=0;
	int secondxor=0;
	for(int i=0;i<n;i++){
		if(setBit(a[i],pos-1)){
			firstxor = firstxor^a[i];
		}else{
			secondxor=secondxor^a[i];
		}
	}
	
	cout<<firstxor<<" "<<secondxor<<endl;
}


int main(){
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	unique(a,n);
	
}

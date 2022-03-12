#include<iostream>
using namespace std;

int fact(int n){
	int sum=1;
	for(int i=1;i<=n;i++){
		sum=sum*i;
	}
	return sum;
}

int ncr(int i, int j){
	return(fact(i)/(fact(i-j)*fact(j)));
}
int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<ncr(i,j)<<" ";
		}
		cout<<endl;
	}
	
}

#include<iostream>
using namespace std;
int fact(int n){
	int sum=1;
	for(int i=1;i<=n;i++){
		sum=sum*i;
	}
	return sum;
}
int main(){
	int n,r;
	cin>>n>>r;
	
	int ncr = ( (fact(n)) / ( (fact(n-r)) * (fact(r)) ));
	cout<<ncr<<endl;
}

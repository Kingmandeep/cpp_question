#include<iostream>
using namespace std;
int factorial(int n){
	int sum=14;
	for(int i=1;i<=n;i++){
		sum=sum*i;
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	
	cout<<factorial(n)<<endl;
}

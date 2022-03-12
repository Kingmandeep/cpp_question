#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int count=1;
	while((n&(n-1))>0){
		n = n&(n-1);
		count++;
	}
	
	cout<<count<<endl; 
}

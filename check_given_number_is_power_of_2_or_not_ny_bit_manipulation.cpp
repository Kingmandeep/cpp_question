#include<iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	
	if((n&(n-1))==0){
		cout<<"it is power of 2"<<endl;
	}else{
		cout<<"it is not power of 2"<<endl;
	}
}

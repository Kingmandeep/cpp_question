#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool flag=true;
	if(n==0 || n==1){
	flag=false;	
	}
	

	for(int i=2;i<n;i++){
		if(n%i==0){
			flag=false;
			break;
		}
	}
	if(flag){
		cout<<"prime Number";
	}else{
		cout<<"Not Prime Number";
	}
}

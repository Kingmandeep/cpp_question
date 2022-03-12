#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char c[n+1];
	cin>>c;
	
	bool flag=true;
	for(int i=0;i<n;i++){
		if(c[i]!=c[n-i-1]){
			flag=false;
			break;
		}
	}
	if(flag){
		cout<<"palidrome"<<endl;
	}else{
		cout<<"not palidrome"<<endl;
	}
	
}

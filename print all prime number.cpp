#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	
	for(int i=a;i<=b;i++){
		bool flag=true;
		if(i==0 || i==1){
			flag=false;
		}
		for(int j=2;j<i;j++){
			if(i%j==0){
				flag=false;
				break;
			}
		}
		if(flag){
			cout<<i<<" ";
		}
	}
}

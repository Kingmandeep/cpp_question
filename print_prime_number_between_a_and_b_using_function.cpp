#include<iostream>
#include<cmath>
using namespace std;
void prime(int a, int b){
	
	for(int i=a;i<=b;i++){
		bool flag=true;
		if(i==0 || i==1){
			flag=false;
		}
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag=false;
				break;
			}
		}
		if(flag){
			cout<<i<<" ";
		}
	}
	return;
}
int main(){
	int a,b;
	cin>>a>>b;
	
	prime(a,b);
}

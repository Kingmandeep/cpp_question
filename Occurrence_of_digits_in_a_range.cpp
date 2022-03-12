#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int digit;
	cin>>digit;
	int count=0;
	
	for(int i=a;i<=b;i++){
		int x=i;
	
		while(x>0){
			int rem=x%10;
			x=x/10;
			if(rem==digit){
				count++;
				
			}
		}
		
	}
	cout<<count;
}

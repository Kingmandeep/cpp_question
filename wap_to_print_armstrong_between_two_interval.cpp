#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	int a,b;
	cin>>a>>b;
	
	for(int i=a;i<=b;i++){
		
		
		int x=i;
		int rem,sum=0;
		
		int y=i,n=0;
		while(y>0){
			n++;
			y/=10;
		}
		
		while(x>0){
			rem=x%10;
			sum=sum+pow(rem,n);
		    x/=10;
	    }
		if(i==sum){
		    cout<<i<<endl;
		}
		
		
		
	}
	
	
}

#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	string s;
	cin>>s;
	
	int sum=0,k=0;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]>='0' && s[i]<='9'){
			
			sum=sum+(s[i]-'0')*pow(16,k);
			k++;
		}else{
			if(s[i]=='A'){
				sum=sum+10*pow(16,k);
				k++;
			}else if(s[i]=='B'){
				sum=sum+11*pow(16,k);
				k++;
			}else if(s[i]=='C'){
				sum=sum+12*pow(16,k);
				k++;
			}else if(s[i]=='D'){
				sum=sum+13*pow(16,k);
				k++;
			}else if(s[i]=='E'){
				sum=sum+14*pow(16,k);
				k++;
			}else if(s[i]=='F'){
				sum=sum+15*pow(16,k);
				k++;
			}
		}
	}
	cout<<sum<<endl;
}

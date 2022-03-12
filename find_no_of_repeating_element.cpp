#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	
	string s;
	getline(cin,s);
	
	int sum=0;
	int max=0;
	char a=s[0];
	char b;
	
	sort(s.begin(),s.end());
	
	for(int i=0;i<s.length();i++){
		if(a==s[i]){
			sum++;
		}else{
			if(sum>=max){
				max=sum;
				sum=1;
				b=a;
			}
			a=s[i];
		}
		
	}
	
	cout<<max<<" no. of repeating is "<<b<<endl;
}

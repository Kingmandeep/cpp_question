#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	
	string s;
	getline(cin,s);
	
	// convert uppercase
	
	for(int i=0;i<s.length();i++){
		if(s[i]>='a' && s[i]<='z'){
			s[i]=s[i]-32;
		}
	}
	cout<<s<<endl;
	
	// convert lowercase
	for(int i=0;i<s.length();i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]=s[i]+32;
		}
	}
	
	cout<<s<<endl;
	
	// easy way to convert in uppercase
	
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout<<s<<endl;
	
	//easy way to convert in lowercase
	transform(s.begin(), s.end() , s.begin(), ::tolower);
	cout<<s<<endl;
}

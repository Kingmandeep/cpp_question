#include<iostream>
#include<string>
#include<sstream>
using namespace std;


void substring(string s, string ans){
	
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	
	char ch=s[0];
	int ascii = ch;
	
	string ros=s.substr(1);
	
	substring(ros,ans);
	substring(ros,ch+ans);
	stringstream ss;
	ss<<ascii;
	string str=ss.str();
	
	substring(ros,str+ans);
}

int main(){
	
	string s;
	getline(cin,s);
	
	string ans;
	substring(s,ans);
}

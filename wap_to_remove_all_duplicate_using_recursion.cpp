#include<iostream>

using namespace std;

string remdup(string s,string str){
	
	if(s.length()==0){
		return str;
	}
	
	if(s[0]==s[1]){
		return remdup(s.substr(1),str);
	
	}else{
		str=str+s[0];
	
		return remdup(s.substr(1),str);
		
	}
}

int main(){
	string s;
	getline(cin,s);
	string str="";
	cout<<remdup(s,str);
}

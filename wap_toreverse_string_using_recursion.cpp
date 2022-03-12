#include<iostream>

using namespace std;

string rev(string s,string str,int n){
	if(n==0){
		return str;
	}
	str=str+s[n-1];
	return rev(s,str,n-1);
}

int main(){
	
	string s;
	getline(cin,s);
	
	string str="";
	
	cout<<rev(s,str,s.length());
}

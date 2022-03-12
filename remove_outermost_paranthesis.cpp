#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	
	string str="";
	int j=0;
	for(int i=0;i<s.length();i++){
		
		if(s[i]==41){
			j--;
		}
		if(j!=0){
			str=str+s[i];
		}
		if(s[i]==40){
			j++;
		}
	}
	
	cout<<str;
}

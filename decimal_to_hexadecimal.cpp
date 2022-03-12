
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x=1;
	string s="";
	while(x<=n){
		x*=16;
	}
	x/=16;
	while(x>0){
		int lastdigit = n/x;
		n-=lastdigit*x;
		x/=16;
		if(lastdigit<=9){
			string str=to_string(lastdigit);
			s=s+str;
		}else{
			char c= 'A' + lastdigit - 10;
			s.push_back(c);
		}
	}
	cout<<s<<endl;
}

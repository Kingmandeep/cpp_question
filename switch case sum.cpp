#include<iostream>
using namespace std;
int main(){
	int a,b;
	
	cin>>a>>b;
	char c;
	cin>>c;
	cout<<"ssd";
	switch(c){
		case '+':
			cout<<a<<" + "<<b<<" : "<<a+b<<endl;
			break;
		case '-':
			cout<<a<<" - "<<b<<" : "<<a-b<<endl;
			break;
		case '*':
			cout<<a<<" * "<<b<<" : "<<a*b<<endl;
			break;
		case '/':
			cout<<a<<" / "<<b<<" : "<<a/b<<endl;
			break;
		case '%':
			cout<<a<<" % "<<b<<" : "<<a%b<<endl;
			break;
		default:
			cout<<"invalid operator";
			break;
	}
}

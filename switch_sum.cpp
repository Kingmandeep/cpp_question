#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	char c;
	cin>>c;
	
	switch(c){
		case '+':
			cout<<a+b<<endl;
			break;
		case '-':
			cout<<a-b<<endl;
			break;
		case '*':
			cout<<a*b<<endl;
			break;
		case '/':
			cout<<a/b<<endl;
			break;
		default:
			break;
	}
	int d=(1,2,3,4);
	cout<<d;
}

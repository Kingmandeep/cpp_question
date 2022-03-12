#include <iostream>
#include<string>
#include <sstream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	
	
	while(n>0){
		
		bool flag=true;
		stringstream ss;
		ss<<n;
		string str = ss.str();
		
		for(int i=0;i<str.length()-1;i++){
			
			char c=str[i];
			char d=str[i+1];
			
			string e,f;
			e+=c;
			f+=d;
			
			stringstream num1(e);
			int a=0;
			num1>>a;
			
			stringstream num2(f);
			int b=0;
			num2>>b;
			
			if((a-b==1) || (a-b== -1)){
				
			}else{
				flag=false;
				break;
			}
			
			
		}
		if(flag){
			cout<<n<<endl;
			break;
		}else{
			n--;
		}
	}
	
	
	
	
}

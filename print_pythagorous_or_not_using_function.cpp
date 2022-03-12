#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int max(int a, int b, int c){
	
	return max(a,max(b,c));
}
void pythagorous(int d, int b, int c){
	
	if(pow(d,2)== (pow(b,2) + pow(c,2)) ){
		cout<<"Pythagorous Numbers"<<endl;
	}else{
		cout<<"Not Pythagorous Numbers"<<endl;
	}
	return;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	int d=max(a,b,c);
	if(d==a){
		pythagorous(d,b,c);
	}else if(d==b){
		pythagorous(d,a,c);
	}else{
		pythagorous(d,a,b);
	}
	
}

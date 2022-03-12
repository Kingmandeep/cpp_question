#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<endl<<endl;
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		for(int j=i+1;j<=n;j++){
			cout<<"  ";
		}
		for(int j=n-1;j>=i;j--){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n-i+1;j++){
			cout<<"* ";
		}
		for(int j=1;j<=i-1;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i-1;j++){
			cout<<"  ";
		}
    	for(int j=1;j<=n-i+1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

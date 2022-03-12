#include<iostream>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	int a[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	
	int x;
	cin>>x;
	
	bool flag=true;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]==x){
				cout<<"Element found"<<endl;
				flag=false;
				break;
			}
		}
		if(!flag){
		break;
    	}
	}
	if(flag){
		cout<<"Element Not found"<<endl;
	}
}

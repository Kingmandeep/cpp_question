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
	
	bool flag=false;
	int sr=0;
	c=c-1;
	while(sr<r && c>=0){
		if(x==a[sr][c]){
			flag=true;
			cout<<"present";
			break;
		}
		if(a[sr][c]>x){
			c--;
		}else{
			sr++;
		}
		
	}
	if(!flag){
		cout<<"not present";
	}
	
}

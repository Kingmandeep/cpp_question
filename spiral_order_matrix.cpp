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
	
	int sr=0,sc=0;
	while(sr<r && sc<c){
		for(int i=sc;i<c;i++){
			cout<<a[sr][i]<<" ";
		}
		sr++;
		for(int i=sr;i<r;i++){
			cout<<a[i][c-1]<<" ";
		}
		c--;
		for(int i=c-1;i>=sc;i--){
			cout<<a[r-1][i]<<" ";
		}
		r--;
		for(int i=r-1;i>=sr;i--){
			cout<<a[i][sc]<<" ";
		}
		sc++;
	}
}

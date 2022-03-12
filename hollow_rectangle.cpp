#include<iostream>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	
	for(int i=0;i<r;i++){
		cout<<"* ";
		
		for(int j=1;j<c-1;j++){
			if(i==0 || i==r-1){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		cout<<"* "<<endl;
		
	}
}

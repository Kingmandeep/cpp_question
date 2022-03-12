#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cout<<"Enter first row and coloumn"<<endl;
	cin>>n1>>n2;
	int a[n1][n2];
	cout<<"Enter first matrix"<<endl;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			cin>>a[i][j];
		}
	}
	
	cout<<"Enter second row and coloumn"<<endl;
	int n3,n4;
	cin>>n3>>n4;
	if(n3==n2){
		int b[n3][n4];
	    for(int i=0;i<n3;i++){
		    for(int j=0;j<n4;j++){
			cin>>b[i][j];
	    	}
    	}
    	
    	int c[n1][n4];
    	for(int i=0;i<n1;i++){
    		for(int j=0;j<n4;j++){
    			int sum=0;
    			for(int k=0;k<n2;k++){
    				sum+=a[i][k]*b[k][j];
				}
				c[i][j]=sum;
			}
		}
		cout<<endl<<"Multiplication matrix is : "<<endl;
		for(int i=0;i<n1;i++){
			for(int j=0;j<n4;j++){
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
	}else{
		cout<<"first matrix coloumn doesn't match with second row, so multiplication doesnot exsist"<<endl;
	}
	
}

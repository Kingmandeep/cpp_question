#include<iostream>

using namespace std;

int get_bit(int n,int i){
	
	return ((n & (1<<i)) !=0);
}

int main(){
	
	int n,i;
	cin>>n>>i;
	
	cout<<get_bit(5,i)<<endl;
}

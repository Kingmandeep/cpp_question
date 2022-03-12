#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *pointer=&a;
	
	cout<<pointer<<endl;
	cout<<*pointer<<endl;
	*pointer=20;
	cout<<a<<" "<<&a<<endl;
	cout<<*pointer<<" "<<pointer<<endl;
	pointer++;
	cout<<*pointer<<" "<<pointer<<endl;
}

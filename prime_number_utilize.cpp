 #include<iostream>
 #include<cmath>
 using namespace std;
 int main(){
 	int n;
 	cin>>n;
 	bool flag=true;
 	if(n==1 || n==0){
 		flag=false;
	 }
 	
 	for(int i=2;i<=sqrt(n);i++){
 		if(n%i==0){
 			flag=false;
 			break;
		 }
	 }
	 if(flag){
	 	cout<<"prime number";
	 }else{
	 	cout<<"Not Prime Number";
	 }
 }

#include<iostream>
#include<math.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int Max=INT_MIN;
	int Min=INT_MAX;
	for(int i=0;i<n;i++){
		Max=max(a[i],Max);
		Min = min(a[i],Min);
	}
	cout<<"maximum number is : "<<Max<<endl;
	cout<<"minimum number is : "<<Min<<endl;
}

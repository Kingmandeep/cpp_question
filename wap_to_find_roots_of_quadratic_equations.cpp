#include<iostream>
#include<cmath>
#include<Math.h>
using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	
	double d=(b*b)-(4*a*c);
	if(d>0){
		d=sqrt(d);
	    double x=((-1*b)+d)/(2*a);
	    double y=((-1*b)-d)/(2*a);
	
	    cout<<x<<" "<<y<<endl;
	}else if(d==0){
		double x=(-1*b)/(2*a);
	    double y=(-1*b)/(2*a);
	
	    cout<<x<<" "<<y<<endl;
	}else{
		double x=-b/(2*a);
		double i=sqrt(-d)/(2*a);
		cout<<x+i<<" "<<-x+i;
	}
	
}

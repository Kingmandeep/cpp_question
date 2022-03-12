#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;
int main(){
	
	string s="kya hal hai";
	cout<<s<<endl;
	cout<<s.empty()<<endl;
    s.replace(1,4,"md");
    cout<<s<<endl;
    cout<<s.find("hai")<<endl;
    
    string s1="786";
    stringstream num(s1);
    int x=0;
    num>>x;
    cout<<x+4<<endl;
    
    int y=50;
    stringstream ss1;
    ss1<<y;
    string s2 = ss1.str();
    cout<<s2+"24"<<endl;
    
    string s3="sdkjfadmxjposjd";
    
    sort(s3.begin(),s3.end());
    cout<<s3<<endl;
    
   
    
  
    
}

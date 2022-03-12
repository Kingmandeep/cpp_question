#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 
    string str;
    vector<int> a[102];
   vector<string>arr;
    cin.ignore();
    
    for(int i=0;i<n;i++){
     std::getline(cin,str);
     arr.push_back(str);
    }
    int s,d;
 cin>>s>>d;

    for (int i=0;i<n;i++){
        string str=arr[i];
  istringstream ss(str);
     string w1;
     vector<int> temp1(102);
     int size=0;
     while(ss>>w1)
     {
      int n=stoi(w1);
           temp1[size]=n;
           size++;
        }
     
     for(int j=0;j<size;j++){
      a[i+1].push_back(temp1[j]);
     }
    }
    
 
 
 
 int dist[102];
 for(int i=0;i<102;i++){
  dist[i]=INT_MAX;
 }

 queue<int> Q;
 dist[s]=0;
 Q.push(s);

 while(!Q.empty()){
  int t1=Q.front();
  Q.pop();
  for(auto i1:a[t1]){
   if(dist[t1]+1<dist[i1]){
    dist[i1]=dist[t1]+1;
    Q.push(i1);
   }
  }
 }
 if(dist[d]!=INT_MAX)
     cout<<dist[d];
    else{
     cout<<-1;
    }
}

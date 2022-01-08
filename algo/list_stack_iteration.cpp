#include <bits/stdc++.h>
using namespace std;

int main() {
  list<int>l;
  int n;
  cin>>n;
  for(int i=0;i<n;++i){
    int x;
    cin>>x;
    l.push_back(x);
  }
  // for(auto i=l.begin();i!=l.end();++i){
  //   cout<<*i<<' ';
  // }
  // cout<<endl;
  // for(auto i=l.rbegin();i!=l.rend();++i){
  //   cout<<*i<<' ';
  // }
  cout<<endl;
  list<int>::iterator it;
  // it=l.end();
  // for(int i=0;i<n;++i){
  //   cout<<*--it<<' ';
  // }
  unordered_map<int,int>m;
  m[1]=2;
  m[2]=3;
  m[3]=4;
  stack<pair<int,int>>s;
  // s.push({0,1});
  //  cout<<s.top().second<<endl;
  it=l.begin();
  while(it != l.end()){
    int y=*it;
    int z,k;
    if(!s.empty()){
       z=s.top().first;
       k=s.top().second;
    }
    if(!s.empty() && (y!=z) && (k >= m[z])){
      int x=(s.top()).first;
      while(!s.empty() && (((s.top()).first) == x)){
        s.pop();
      }
    }
    if(!s.empty()){
       z=s.top().first;
       k=s.top().second;
    } 
    if(s.empty() || (z!=y)){
      s.push({*it,1});
    }
    if(y==z){
      s.push({y,k+1});
    }
    // cout<<*it<<' ';
    ++it;  
  }
 
  if(!s.empty() && (s.top()).second >= m[(s.top()).first]){
      int x=(s.top()).first;
      while(!s.empty() && (s.top()).first == x){
        s.pop();
      }
  }
  while(!s.empty()){
    cout<<(s.top().first)<<' ';
    s.pop();
  }
  cout<<endl;
  return 0;
}
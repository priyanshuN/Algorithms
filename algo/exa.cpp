#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,w,l;
  getline(cin,l);
  unordered_set<char>sc;
  for(int i=0;i<l.size();++i){
    sc.insert(l[i]);
  }
  getline(cin,s);
  unordered_map<string,int>map;
  stringstream st(s);
  while(st>>w){
    map[w]++;
  }
  /*for(auto it:map){
    cout<<it.first<<endl;
  }
  unordered_map<string,int>::iterator it1;
  for(it1=map.begin();it1!=map.end();++it1){
    cout<<it1->first<<endl;
  }*/
  int z=0;
  for(auto x:map){
    unordered_set<char>s2;
    for(int j=0;j<x.first.size() ;++j){
      s2.insert(x.first[j]);
    }
    if(sc==s2){
      z++;
      cout<<x.first<<endl;
    }
  }
  cout<<z<<endl;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,char>
bool sol(string s){
    int n=s.size();
    unordered_map<char,int>m;
    for(auto c:s){
        m[c]++;
        if(m[c]>(n+1)/2)return 0;
    }
    unordered_map<char,int>::iterator it=m.begin();
    int i=0;
    while(i<n){
        if(it->second==0){
            it++;
        }
        s[i]=it->first;
        (it->second)--;
        i+=2;
    }
    i=1;
    while(i<n){
        if(it->second==0){
            it++;
        }
        s[i]=it->first;
        (it->second)--;
        i+=2;
    }
    return 1;
}

bool sol1(string s){
    int n=s.size();
    unordered_map<char,int>m;
    for(auto c:s){
        m[c]++;
        if(m[c]>(n+1)/2)return 0;
    }
    priority_queue<pi>q;
    for(auto it:m){
        q.push({it.second,it.first});
    }
    pi prev={-1,'#'};
    string ss="";
    while(!q.empty()){
        pi curr=q.top();
        q.pop();
        ss=ss+curr.second;
        if(prev.first>0){
            q.push(prev);
        }
        (curr.first)--;
        prev=curr;
    }
    if(ss.size()==n)return 1;
    else return 0;
}

int main(){
    string s;
    cin>>s;
    if(sol(s))cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
}
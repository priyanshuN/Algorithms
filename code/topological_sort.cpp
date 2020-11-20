#include<bits/stdc++.h>
using namespace std;

void topo(list<int>*adj,vector<bool>&vi,stack<int>&s,int i){
    list<int>::iterator it;
    vi[i]=1;
    for(it=adj[i].begin();it!=adj[i].end();++it){
        if(!vi[*it]){
            topo(adj,vi,s,*it);
        }
    }
    s.push(i);
}

void topological(list<int>*adj,int n){
    stack<int>s;
    vector<bool>vi(n+1,0);
    for(int i=1;i<=n;++i){
        if(!vi[i]){
            topo(adj,vi,s, i);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<' ';
        s.pop();
    }
    cout<<endl;
}


int main(){
    int n=6;
    list<int>*adj=new list<int>[n+1];  
    adj[3].push_back(4); 
    adj[4].push_back(2);  
    adj[5].push_back(1);
    adj[5].push_back(2);
    adj[6].push_back(1);
    adj[6].push_back(3);
    topological(adj,n);
    return 0;
}
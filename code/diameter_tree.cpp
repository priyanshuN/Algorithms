#include<bits/stdc++.h>
using namespace std;
int x;

void dfsUtil(int a,int count,bool vis[],int& max_c,list<int>*adj){
    vis[a]=true;
    count++;
    for(auto i=adj[a].begin();i!=adj[a].end();++i){
        if(!vis[*i]){
            vis[*i]=true;
            if(count>max_c){
                max_c=count;
                x=*i;
            }
            dfsUtil(*i,count,vis,max_c,adj);
        }
    }
}

void dfs(int a,int n,list<int>*adj,int& max_c){
    bool vis[n];
    int count=0;
    for(int i=1;i<=n;++i){
        vis[i]=false;
    }
    dfsUtil(a,count+1,vis,max_c,adj);
}

int dfs_dia(list<int>*adj,int n){
    int max_c=INT_MIN;
    dfs(1,n,adj,max_c);
    dfs(x,n,adj,max_c);
    return max_c;
}

int main(){
    int n=5;
    /* Constructed tree is 
         1 
        / \ 
        2    3 
       / \ 
      4   5 */
    list<int>*adj = new list<int>[n+1];
    /*create undirected edges */
    adj[1].push_back(2); 
    adj[2].push_back(1); 
    adj[1].push_back(3); 
    adj[3].push_back(1); 
    adj[2].push_back(4); 
    adj[4].push_back(2); 
    adj[2].push_back(5); 
    adj[5].push_back(2); 
    cout<<dfs_dia(adj,n)<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> v[], int x, int y) 
{ 
    v[x].push_back(y); 
    v[y].push_back(x); 
} 

void print(vector<int>&st){
    for(int i=0;i<st.size();++i){
        cout<<st[i]<<' ';
    }
    cout<<endl;
}

void dfs(vector<int>v[],int x,int y,bool visited[],int n,vector<int>&st){
    st.push_back(x);
    if(x==y){
        print(st);
        return;
    }
    visited[x]=true;
    for(int i=0;i<v[x].size();++i){
        if(!visited[v[x][i]]){
            visited[v[x][i]]=true;
            dfs(v,v[x][i],y,visited,n,st);
        }
    }
    st.pop_back();
}

void dfs_call(vector<int>v[],int x,int y,int n,vector<int>&st){
    bool visited[n+1];
    memset(visited,false,sizeof(visited));
    dfs(v,x,y,visited,n,st);
}

int main(){
    int n = 10; 
    vector<int> v[n], st; 
  
    // Vertex numbers should be from 1 to 9. 
    addEdge(v, 1, 2); 
    addEdge(v, 1, 3); 
    addEdge(v, 2, 4); 
    addEdge(v, 2, 5); 
    addEdge(v, 2, 6); 
    addEdge(v, 3, 7); 
    addEdge(v, 3, 8); 
    addEdge(v, 3, 9); 
  
    // Function Call 
    dfs_call(v,4, 8, n, st); 
    return 0;
}
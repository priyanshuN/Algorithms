#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,double>
#define M 1001
bool sol(int V,int s,vector<pi>g,int m){
    vector<double>dist(V,DBL_MAX);
    vector<bool>inq(V,false);
    vector<int>c(V,0);
    dist[s]=0;
    queue<int>q;
    q.push(s);
    inq[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        inq[u]=false;
        for(pi x:g[u]){
            int v=x.first;
            double cost=x.second;
            if((dist[v]-(dist[u]+cost))>0){
                dist[v]=(dist[u]+cost;
                if(!inq[v]){
                    q.push(v);
                    inq[v]=true;
                    c[v]++;
                    if(c[v]>=V)return true;
                }
            }
        }
    }
    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;++i){
        int r1,r2;
        double x;
        cin>>r1>>r2>>x;
        
    }
    return 0;
}